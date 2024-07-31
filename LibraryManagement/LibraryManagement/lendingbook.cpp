#include "lendingbook.h"
#include "ui_lendingbook.h"
#include <QFile>
#include <QString>
#include <QTableWidget>
#include <QDebug>
#include <QMessageBox>
#include <memberinfo.h>
#include <bookinfo.h>
#include <QDateTime>

LendingBook::LendingBook(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LendingBook)
{
    ui->setupUi(this);
    display();
}

LendingBook::~LendingBook()
{
    delete ui;
}

void LendingBook::display() {
    QFile BookData ("Books.csv");
    if (!BookData.open(QIODevice::ReadOnly)) {
        qDebug() << "Book.csv file was not opened in LendingBook::display() method";
        return;
    }
    QStringList headerLabels;
    headerLabels << "Title" << "ISBN";
    ui->tableWidget->setColumnCount(2);
    ui->tableWidget->setHorizontalHeaderLabels(headerLabels);

    int row = 0;
    while (!BookData.atEnd()) {
        QString line = BookData.readLine();
        QStringList parts = line.split(',');
        QString status = parts[3].trimmed();

        if (status == "Available") {
            QString title = parts[0];
            QString isbn = parts[2];
            ui->tableWidget->insertRow(row);
            ui->tableWidget->setItem(row, 0, new QTableWidgetItem(title));
            ui->tableWidget->setItem(row, 1, new QTableWidgetItem(isbn));

            ui->tableWidget->resizeColumnToContents(0);
            ui->tableWidget->resizeColumnToContents(1);
            ui->tableWidget->item(row, 0)->setFont(QFont("Helvetica", 14));
            ui->tableWidget->item(row, 1)->setFont(QFont("Helvetica", 14));

            row++;
        }
    }
}

void LendTheBook (QString isbn, QString MembershipCode) {
    QFile BookData ("Books.csv");
    if (!BookData.open(QIODevice::ReadWrite)) {
        qDebug() << "Books.csv file was not opened in LendTheBook() function";
        return;
    }
    QString UpdatedData;
    while (!BookData.atEnd()) {
        QString line = BookData.readLine();
        QStringList parts = line.split(',');
        QString CurrentISBN = parts[2].trimmed();
        if (CurrentISBN == isbn) {
            parts[3] = MembershipCode;
            QDate currentDate = QDate::currentDate();
            QDate takingBackDate = currentDate.addDays(14);
            parts[4] = currentDate.toString("yyyy-MM-dd");
            parts[5] = takingBackDate.toString("yyyy-MM-dd");
            line = parts.join(',');
            line += "\n";
        }
        UpdatedData += line;
    }
    QTextStream write1(&BookData);
    BookData.resize(0);
    write1 << UpdatedData;
    BookData.close();

    UpdatedData.clear();
    QFile MemberData ("Members.csv");
    if (!MemberData.open(QIODevice::ReadWrite)) {
        qDebug() << "Members.csv file was not opened in LendTheBook() function";
        return;
    }

    while (!MemberData.atEnd()) {
        QString line = MemberData.readLine();
        QStringList parts = line.split(',');
        QString CurrentCode = parts[2].trimmed();
        if (CurrentCode == MembershipCode) {
            QString temp = parts[3].trimmed();
            int status = temp.toInt();
            ++status;
            parts[3] = QString::number(status);
            line = parts.join(',');
            line += "\n";
        }
        UpdatedData += line;
    }
    QTextStream write2 (&MemberData);
    MemberData.resize(0);
    write2 << UpdatedData;
    MemberData.close();
}

void LendingBook::on_SubmitButton_clicked()
{
    QString ISBN = ui->isbnLE->text();
    QString MembershipCode = ui->CodeLE->text();
    if (!MemberInfo::MemberExists(MembershipCode)) {
        QMessageBox::warning(this,"Error","This member does not exists",QMessageBox::Ok); //ok

    } else if (MemberInfo::MemberHasReachedLimits(MembershipCode)) {
        QMessageBox::warning(this,"Error","This member has reached the limits",QMessageBox::Ok); //ok

    } else if (!BookInfo::isFound(ISBN)) {
        QMessageBox::warning(this,"Error","This book does not exist",QMessageBox::Ok);//ok

    } else if (!BookInfo::isAvailable(ISBN)) {
        QMessageBox::warning(this,"Error","This book is already borrowed",QMessageBox::Ok);//ok

    } else {
        LendTheBook(ISBN,MembershipCode);
        QDate currentDate = QDate::currentDate();
        QDate returnDate = currentDate.addDays(14);
        QString returnDateStr = returnDate.toString("yyyy-MM-dd");
        QMessageBox::information(this, "Return Date","Lending process is done successfuly, the return date is:" + returnDateStr,QMessageBox::Ok);
    }
}
