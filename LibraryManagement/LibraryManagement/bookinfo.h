#ifndef BOOKINFO_H
#define BOOKINFO_H
#include <QString>

class BookInfo
{
    QString name, author, isbn;
public:
    void set (const QString&, const QString&, const QString&);
    QString GetName();
    QString GetAuthor();
    QString GetISBN();
    static bool isFound (QString);
    static bool isAvailable (QString);
};

#endif // BOOKINFO_H
