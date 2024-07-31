#include "returninigbook.h"
#include "ui_returninigbook.h"
#include <QFile>
#include <QDebug>
#include <QString>
#include <bookinfo.h>
#include <memberinfo.h>
#include <QMessageBox>

ReturninigBook::ReturninigBook(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ReturninigBook)
{
    ui->setupUi(this);
}

ReturninigBook::~ReturninigBook()
{
    delete ui;
}

bool CheckBorrower (QString& ISBN, QString& Code){
    QFile BookData ("Books.csv");
    if (!BookData.open(QIODevice::ReadOnly)) {
        qDebug () << "Books.csv is not opened in CheckBorrower() function";
    }
    bool Borrower = false;
    while (!BookData.atEnd()) {
        QString line = BookData.readLine();
        QStringList parts = line.split(',');
        QString currentISBN = parts[2].trimmed();
        if (currentISBN == ISBN) {
            QString status = parts[3].trimmed();
            if (status == Code){
                Borrower = true;
                break;
            }
        }
    }
    return Borrower;
}

void ReturnBook (QString& ISBN, QString& Code) {
    QFile BookData ("Books.csv");
    if (!BookData.open(QIODevice::ReadWrite)) {
        qDebug () << "Books.csv is not opened in ReturnBook() function";
        return;
    }
    QString UpdatedData;
    while (!BookData.atEnd()) {
        QString line = BookData.readLine();
        QStringList parts = line.split(',');
        QString currentISBN = parts[2].trimmed();
        if (currentISBN == ISBN) {
            parts[3] = "Available";
            parts[4] = "#";
            parts[5] = "#";
            line = parts.join(',');
            line += "\n";
        }
        UpdatedData += line;
    }
    BookData.resize(0);
    QTextStream write1 (&BookData);
    write1 << UpdatedData;
    BookData.close();
    UpdatedData.clear();

    QFile MemberData ("Members.csv");
    if (!MemberData.open(QIODevice::ReadWrite)) {
        qDebug () << "Members.csv is not opened in ReturnBook() function";
        return;
    }
    while (!MemberData.atEnd()) {
        QString line = MemberData.readLine();
        QStringList parts = line.split(',');
        QString currentCode = parts[2].trimmed();
        if (currentCode == Code) {
            QString status = parts[3].trimmed();
            int temp = status.toInt();
            --temp;
            parts[3] = QString::number(temp);
            line = parts.join(',');
            line += "\n";
        }
        UpdatedData += line;
    }
    MemberData.resize(0);
    QTextStream write2 (&MemberData);
    write2 << UpdatedData;
    MemberData.close();
}

void ReturninigBook::on_SubmitButton_clicked()
{
    QString ISBN = ui->ISBNLE->text();
    QString Code = ui->MembershipCodeLE->text();
    if (BookInfo::isAvailable(ISBN)) {
        QMessageBox::warning(this,"Error","This book has not been borrowed",QMessageBox::Ok);
        return;
    }
    if (!MemberInfo::MemberExists(Code)) {
        QMessageBox::warning(this,"Error","This Member does not exists",QMessageBox::Ok);
        return;
    }
    if (!CheckBorrower(ISBN,Code)) {
        QMessageBox::warning(this,"Error","This book is not lended to this member",QMessageBox::Ok);
        return;
    }
    else {
        ReturnBook(ISBN,Code);
        QMessageBox::information(this,"Book Returned","The book has been successfully returned",QMessageBox::Ok);
        ReturninigBook::~ReturninigBook();
    }
}
