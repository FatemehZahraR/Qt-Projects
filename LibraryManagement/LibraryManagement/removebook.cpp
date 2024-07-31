#include "removebook.h"
#include "ui_removebook.h"
#include <QString>
#include <QFile>
#include <QDebug>
#include <QTextStream>
#include <bookinfo.h>
#include <QMessageBox>

RemoveBook::RemoveBook(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::RemoveBook)
{
    ui->setupUi(this);
}

RemoveBook::~RemoveBook()
{
    delete ui;
}


void EditMemberStatus (QString& code) {
    QFile MemberData ("Members.csv");
    if (!MemberData.open(QIODevice::ReadWrite)) {
        qDebug() << "Members.csv file is not opened in EditMemberStatus() function";
        return;
    }

    QString UpdatedData;
    while (!MemberData.atEnd()) {
        QString line = MemberData.readLine();
        QStringList parts = line.split(',');
        QString currentCode = parts[2].trimmed();
        if (currentCode == code) {
            QString status = parts[3].trimmed();
            int temp = status.toInt();
            --temp;
            qDebug () << temp;
            parts[3] = QString::number(temp);
            line = parts.join(',');
            line += "\n";
        }
        UpdatedData += line;
    }
    MemberData.resize(0);
    QTextStream write (&MemberData);
    write << UpdatedData;
    MemberData.close();
}

void RemoveBookByISBN (const QString& RemovingISBN) {
    QFile BooksData ("Books.csv");
    if (!BooksData.open(QIODevice::ReadWrite)) {
        qDebug() << "The Book.csv file could not be openned in RemoveBookByISBN function";
        return;
    }
    QString NewData;
    while (!BooksData.atEnd()) {
        QString line = BooksData.readLine();
        QStringList parts = line.split(',');
        QString CheckingISBN = parts[2];
        QString Code = parts[3].trimmed();
        if (CheckingISBN == RemovingISBN) {
            if (Code != "Available") {
                QString Code = parts[3].trimmed();
                qDebug() <<  Code;
                EditMemberStatus(Code);
            }
        }
        if (CheckingISBN != RemovingISBN) {
            NewData += line;
        }
    }
    BooksData.resize(0);
    QTextStream write(&BooksData);
    write << NewData;
    BooksData.close();
}

void RemoveBook::on_RemoveButton_clicked()
{
    QString isbn = ui->ISBNLE->text();
    if (!BookInfo::isFound(isbn)) {
        QMessageBox::warning(this,"Error","This book does not exist",QMessageBox::Ok);
        return;
    }
    RemoveBookByISBN(isbn);
    RemoveBook::~RemoveBook();
}
