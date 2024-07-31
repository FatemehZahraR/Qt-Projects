/********************************************************************************
** Form generated from reading UI file 'books.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOOKS_H
#define UI_BOOKS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Books
{
public:
    QListWidget *listWidget;
    QLabel *label;
    QPushButton *AddBookButton;
    QPushButton *RemoveButton;

    void setupUi(QWidget *Books)
    {
        if (Books->objectName().isEmpty())
            Books->setObjectName(QString::fromUtf8("Books"));
        Books->resize(745, 655);
        listWidget = new QListWidget(Books);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(50, 60, 641, 501));
        label = new QLabel(Books);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 20, 111, 31));
        QFont font;
        font.setPointSize(17);
        label->setFont(font);
        AddBookButton = new QPushButton(Books);
        AddBookButton->setObjectName(QString::fromUtf8("AddBookButton"));
        AddBookButton->setGeometry(QRect(430, 580, 120, 40));
        AddBookButton->setMinimumSize(QSize(120, 40));
        AddBookButton->setMaximumSize(QSize(100, 30));
        RemoveButton = new QPushButton(Books);
        RemoveButton->setObjectName(QString::fromUtf8("RemoveButton"));
        RemoveButton->setGeometry(QRect(570, 580, 120, 40));
        RemoveButton->setMinimumSize(QSize(120, 40));
        RemoveButton->setMaximumSize(QSize(100, 30));

        retranslateUi(Books);

        QMetaObject::connectSlotsByName(Books);
    } // setupUi

    void retranslateUi(QWidget *Books)
    {
        Books->setWindowTitle(QCoreApplication::translate("Books", "Form", nullptr));
        label->setText(QCoreApplication::translate("Books", "Books:", nullptr));
        AddBookButton->setText(QCoreApplication::translate("Books", "Add Book", nullptr));
        RemoveButton->setText(QCoreApplication::translate("Books", "Remove Book", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Books: public Ui_Books {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOKS_H
