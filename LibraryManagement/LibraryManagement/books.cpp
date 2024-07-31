#include "books.h"
#include "ui_books.h"
#include <addbook.h>
#include <QFile>
#include <QString>
#include <QDebug>
#include <removebook.h>

Books::Books(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Books)
{
    ui->setupUi(this);
    display();
}

Books::~Books()
{
    delete ui;
}

void Books::display() {
    QFile BooksData ("Books.csv");
    if (!BooksData.open(QIODevice::ReadOnly)) {
        qDebug() << "Books.csv file is not opened in Books::display() function";
    }
    while (!BooksData.atEnd()) {
        QString line = BooksData.readLine();
        QStringList parts = line.split(',');
        QString ItemName = parts[0] + " - " + parts[1];
        QListWidgetItem *item = new QListWidgetItem (ItemName,ui->listWidget);
        item->setFont(QFont("Helvetica",15));
    }
    BooksData.close();
}

void Books::on_AddBookButton_clicked()
{
    AddBook *AddBookWin = new AddBook();
    AddBookWin->setWindowTitle("Add Book");
    AddBookWin->show();
}


void Books::on_RemoveButton_clicked()
{
    RemoveBook *remBookWin = new RemoveBook();
    remBookWin->setWindowTitle("Remove Book");
    remBookWin->show();
}

