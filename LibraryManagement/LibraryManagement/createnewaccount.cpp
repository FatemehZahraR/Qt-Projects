#include "createnewaccount.h"
#include "ui_createnewaccount.h"
#include <QMessageBox>
#include <QFile>
#include <QDebug>
#include <QTextStream>

CreateNewAccount::CreateNewAccount(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CreateNewAccount)
{
    QPalette palette;
    palette.setColor(QPalette::Window, QColor(112,128,144));
    palette.setColor(QPalette::WindowText, Qt::lightGray);
    palette.setColor(QPalette::Button, QColor(83,104,114).lighter(120));
    palette.setColor(QPalette::ButtonText, Qt::white);
    palette.setColor(QPalette::ToolTipBase, Qt::darkGray);
    palette.setColor(QPalette::Base, QColor(83,104,114).darker(150));
    palette.setColor(QPalette::Text, Qt::white);
    QApplication::setPalette(palette);
    ui->setupUi(this);
}

CreateNewAccount::~CreateNewAccount()
{
    delete ui;
}

void CreateNewAccount::Set() {
    InputAdministatorPass = ui->AdministratorPassLE->text();
    NewUsername = ui->NewUserName->text();
    NewPassword = ui->NewPassword->text();
}

bool CreateNewAccount::AdministratorPass () {
    return InputAdministatorPass == "ABCD";
}

bool CreateNewAccount::ValidUsername () {
    bool valid = true;
    QFile DataFile ("LoginData.csv");
    if (!DataFile.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "File was not opened in CreateAcc function";
    }
    while (!DataFile.atEnd()) {
        QString line = DataFile.readLine();
        QStringList parts = line.split(',');
        QString username = parts[0];
        if (NewUsername == username) {
            valid = false;
            break;
        }
    }
    DataFile.close();
    return valid;
}

void CreateNewAccount::CreateAcc () {
    QFile DataFile ("LoginData.csv");
    if (!DataFile.open(QIODevice::Append)) {
        qDebug() << "File was not opened in ValidUsername function";
    }
    QTextStream out (&DataFile);
    out << NewUsername <<"," << NewPassword << "\n";
    DataFile.close();
}

void CreateNewAccount::on_SubmitButton_clicked()
{
    Set();
    if (!AdministratorPass()) {
        QMessageBox::warning(this,"Error","The Adminstrator password is wrong",QMessageBox::Ok);
    } else if (!ValidUsername()) {
        QMessageBox::warning(this,"Error", "The username has been taken, try a new username",QMessageBox::Ok);
    } else {
        CreateAcc();
        ui->statusbar->showMessage(("Account Created successfully"), 2000);
    }
}

