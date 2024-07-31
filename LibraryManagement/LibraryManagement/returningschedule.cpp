#include "returningschedule.h"
#include "ui_returningschedule.h"
#include <QFile>
#include <QDate>
#include <QDebug>
#include <QString>
#include <QMessageBox>

ReturningSchedule::ReturningSchedule(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ReturningSchedule)
{
    ui->setupUi(this);
    display();
}

ReturningSchedule::~ReturningSchedule()
{
    delete ui;
}

void ReturningSchedule::display() {
    QFile BookData ("Books.csv");
    if (!BookData.open(QIODevice::ReadOnly)) {
        qDebug() << "Books.csv is not opened in ReturningSchedule::display() method";
    }
    QStringList headerLabels;
    headerLabels << "Title" << "ISBN" << "Borrowed by";
    ui->tableWidget->setColumnCount(3);
    ui->tableWidget->setHorizontalHeaderLabels(headerLabels);

    int row = 0;
    while (!BookData.atEnd()) {
        QString line = BookData.readLine();
        QStringList parts = line.split(',');
        QString status = parts[3].trimmed();
        QString TodaysDate = QDate::currentDate().toString("yyyy-MM-dd");
        if (status != "Available") {
            QString ReturnDate = parts[5].trimmed();
            if (TodaysDate == ReturnDate) {
                QString title = parts[0];
                QString isbn = parts[2];
                QString member = parts[3];
                ui->tableWidget->insertRow(row);
                ui->tableWidget->setItem(row, 0, new QTableWidgetItem(title));
                ui->tableWidget->setItem(row, 1, new QTableWidgetItem(isbn));
                ui->tableWidget->setItem(row, 2, new QTableWidgetItem(member));

                ui->tableWidget->resizeColumnToContents(0);
                ui->tableWidget->resizeColumnToContents(1);
                ui->tableWidget->resizeColumnToContents(2);

                ui->tableWidget->item(row, 0)->setFont(QFont("Helvetica", 14));
                ui->tableWidget->item(row, 1)->setFont(QFont("Helvetica", 14));
                ui->tableWidget->item(row, 2)->setFont(QFont("Helvetica", 14));

                row++;
            }
        }
    }
}
