#include "bookinfo.h"
#include <QFile>
#include <QDebug>

void BookInfo::set(const QString& Name, const QString& Author, const QString& ISBN) {
    name = Name;
    author = Author;
    isbn = ISBN;
}

QString BookInfo::GetName() {
    return this->name;
}

QString BookInfo::GetAuthor() {
    return this->author;
}

QString BookInfo::GetISBN() {
    return this->isbn;
}

bool BookInfo::isFound (QString isbn) {
    QFile BookData ("Books.csv");
    if (!BookData.open(QIODevice::ReadOnly)) {
        qDebug() << "Books.csv file was not opened in BookInfo::isAvailable() method";
    }
    bool found = false;
    while (!BookData.atEnd()) {
        QString line = BookData.readLine();
        QStringList parts = line.split(',');
        QString CurrentISBN = parts[2].trimmed();
        if (CurrentISBN == isbn) {
            found = true;
        }
    }
    return found;
}

bool BookInfo::isAvailable(QString isbn) {
    QFile BookData ("Books.csv");
    if (!BookData.open(QIODevice::ReadOnly)) {
        qDebug() << "Books.csv file was not opened in BookInfo::isAvailable() method";
    }
    bool available = false;
    while (!BookData.atEnd()) {
        QString line = BookData.readLine();
        QStringList parts = line.split(',');
        QString CurrentISBN = parts[2].trimmed();
        if (CurrentISBN == isbn) {
            QString status = parts[3].trimmed();
            if (status == "Available") {
                available = true;
            }
        }
    }
    return available;
}
