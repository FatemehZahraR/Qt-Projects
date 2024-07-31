#include "addbook.h"
#include "ui_addbook.h"
#include <QString>
#include <QFile>
#include <QDebug>
#include <QTextStream>
#include <books.h>
#include <bookinfo.h>
#include <QMessageBox>

AddBook::AddBook(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AddBook)
{
    ui->setupUi(this);
}

AddBook::~AddBook()
{
    delete ui;
}

bool ValidISBN(QString ISBN) {
    QFile BookData ("Books.csv");
    if (!BookData.open(QIODevice::ReadOnly)) {
        qDebug() << "Books.csv file was not opend in ValidISBN (AddBook) function";
    }
    bool valid = true;
    while (!BookData.atEnd()) {
        QString line = BookData.readLine();
        QStringList parts = line.split(',');
        if (parts[2] == ISBN) {
            valid = false;
            break;
        }
    }
    return valid;
}

void AddBookToFile(BookInfo* NewBook) {
    QFile BookData ("Books.csv");
    if (!BookData.open(QIODevice::Append)) {
        qDebug() << "Book.csv was not openned in book::AddBookToFile() method";
    }
    QTextStream write(&BookData);
    write << NewBook->GetName() << "," << NewBook->GetAuthor() << "," << NewBook->GetISBN() << ",Available" << ",#,#\n";
    BookData.close();
}

void AddBook::on_SaveButton_clicked()
{
    BookInfo *NewBook = new BookInfo();
    NewBook->set(ui->NameLE->text(), ui->AuthorLE->text(), ui->ISBNLE->text());
    if (!ValidISBN(NewBook->GetISBN())) {
        QMessageBox::warning(this, "Error","The Input ISBN was used before, try another ISBN",QMessageBox::Ok);
    } else {
        AddBookToFile(NewBook);
        AddBook::~AddBook();
    }
}
