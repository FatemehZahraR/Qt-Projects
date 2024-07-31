#include "login.h"
#include "ui_login.h"
#include <QString>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QDebug>
#include <createnewaccount.h>
#include <mainmenu.h>
#include <QDateTime>

Login::Login(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Login)
{
    ui->setupUi(this);
}

Login::~Login()
{
    delete ui;
}

void Login::Set() {
    InputUsername = ui->usernameLE->text();
    InputPassword = ui->passwordLE->text();
}

void SaveLoginAttempts (QString& Username, QString& Password, bool flag) {
    QFile AttemptsData ("LoginAttempts.csv");
    if (!AttemptsData.open(QIODevice::Append)) {
        qDebug() << "LoginAttempts.csv is not opened in SaveLoginAttempts() function";
        return;
    }

    QTextStream write (&AttemptsData);
    QString AttemptDate = QDateTime::currentDateTime().toString(), line;
    if (flag) {
        line = Username +","+ Password +","+ "Successful" +","+ AttemptDate +"\n";
    } else {
        line = Username +","+ Password +","+ "Unsuccessful" +","+ AttemptDate +"\n";
    }
    write << line;
}

bool LoginCheck (const QString& InputUsername, const QString& InputPassword) {
    QFile DataFile ("LoginData.csv");
    if (!DataFile.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QMessageBox errorMessage;
        errorMessage.setWindowTitle("Error");
        errorMessage.setText("An error occurred while opening the file.");
        errorMessage.setIcon(QMessageBox::Warning);
        errorMessage.exec();
    } else {
        bool check = false;
        while (!DataFile.atEnd()) {
            QString line = DataFile.readLine();
            QStringList parts = line.split (',');
            QString username = parts[0].trimmed();
            QString password = parts[1].trimmed();
            if (InputUsername == username && InputPassword == password) {
                check = true;
                break;
            }
        }
        return check;
    }
}

void Login::on_LoginButton_clicked()
{
    Set();
    if (LoginCheck(InputUsername, InputPassword)) {
        SaveLoginAttempts(InputUsername,InputPassword,true);
        ui->statusbar->showMessage("Account data verified", 1000);
        MainMenu *MainMenuWin = new MainMenu ();
        MainMenuWin->setWindowTitle("Main Menu");
        MainMenuWin->show();
        hide();
    } else {
        SaveLoginAttempts(InputUsername,InputPassword,false);
        QMessageBox::warning(this,"Error","Wrong username or password, try again!",QMessageBox::Ok);
    }
}

void Login::on_CreateNewAccButton_clicked()
{
    CreateNewAccount *NewAccWin = new CreateNewAccount();
    NewAccWin->setWindowTitle("Create New Account");
    NewAccWin->show();
}
