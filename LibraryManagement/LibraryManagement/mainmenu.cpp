#include "mainmenu.h"
#include "ui_mainmenu.h"
#include <books.h>
#include <members.h>
#include <lendingbook.h>
#include <returningschedule.h>
#include <QMessageBox>
#include <QFile>
#include <QDate>
#include <QDebug>
#include <returninigbook.h>

MainMenu::MainMenu(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainMenu)
{
    ui->setupUi(this);
    QPalette palette;
    palette.setColor(QPalette::Window, QColor(0, 49, 83));
    palette.setColor(QPalette::WindowText, Qt::lightGray);
    palette.setColor(QPalette::Button, QColor(0, 49, 83).lighter(120));
    palette.setColor(QPalette::ButtonText, Qt::white);
    palette.setColor(QPalette::ToolTipBase, Qt::darkGray);
    palette.setColor(QPalette::Base, QColor(0, 49, 83).darker(150));
    palette.setColor(QPalette::Text, Qt::white);
    QApplication::setPalette(palette);
   // if (BookToReturnForToday()) {
   //    QMessageBox::information(this,"Returning Schedule Reminder","Check out the Returning schedule section!",QMessageBox::Ok);
   // }
}

MainMenu::~MainMenu()
{
    delete ui;
}

bool MainMenu::BookToReturnForToday () {
    QFile BookData ("Books.csv");
    if (!BookData.open(QIODevice::ReadOnly)) {
        qDebug() << "Books.csv is not opened in MainMenu::BookToReturnForToday () method";
    }
    bool BookForToday = false;
    QDate currentDate = QDate::currentDate();
    QString todaysDate = currentDate.toString("yyyy-MM-dd");
    while (!BookData.atEnd()) {
        QString line = BookData.readLine();
        QStringList parts = line.split(',');
        QString returnDate = parts[5].trimmed();
        if (todaysDate == returnDate) {
            BookForToday = true;
            break;
        }
    }
    BookData.close();
    return BookForToday;
}

void MainMenu::on_BooksButton_clicked()
{
    Books *BooksWin = new Books();
    BooksWin->setWindowTitle("Books");
    BooksWin->show();
}


void MainMenu::on_MembersButton_clicked()
{
    Members *membersWin = new Members();
    membersWin->setWindowTitle("Members");
    membersWin->show();
}


void MainMenu::on_LendingButton_clicked()
{
    LendingBook *LendingBookWin = new LendingBook();
    LendingBookWin->setWindowTitle("Lending Book");
    LendingBookWin->show();
}


void MainMenu::on_ReturningScheduleButton_clicked()
{
    ReturningSchedule *ReturningScheduleWin = new ReturningSchedule();
    ReturningScheduleWin->setWindowTitle("Returning Schedule");
    ReturningScheduleWin->show();
}

void MainMenu::on_ReturningBookButton_clicked()
{
    ReturninigBook *ReturninigBookWin = new ReturninigBook();
    ReturninigBookWin->setWindowTitle("Returning Book");
    ReturninigBookWin->show();
}
