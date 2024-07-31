/********************************************************************************
** Form generated from reading UI file 'removebook.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REMOVEBOOK_H
#define UI_REMOVEBOOK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RemoveBook
{
public:
    QPushButton *RemoveButton;
    QWidget *layoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *ISBNLE;

    void setupUi(QWidget *RemoveBook)
    {
        if (RemoveBook->objectName().isEmpty())
            RemoveBook->setObjectName(QString::fromUtf8("RemoveBook"));
        RemoveBook->resize(302, 198);
        RemoveButton = new QPushButton(RemoveBook);
        RemoveButton->setObjectName(QString::fromUtf8("RemoveButton"));
        RemoveButton->setGeometry(QRect(100, 110, 100, 35));
        RemoveButton->setMinimumSize(QSize(100, 35));
        RemoveButton->setMaximumSize(QSize(100, 35));
        layoutWidget = new QWidget(RemoveBook);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(50, 40, 203, 42));
        formLayout = new QFormLayout(layoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(16);
        label->setFont(font);

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        ISBNLE = new QLineEdit(layoutWidget);
        ISBNLE->setObjectName(QString::fromUtf8("ISBNLE"));
        ISBNLE->setMinimumSize(QSize(150, 40));

        formLayout->setWidget(0, QFormLayout::FieldRole, ISBNLE);


        retranslateUi(RemoveBook);

        QMetaObject::connectSlotsByName(RemoveBook);
    } // setupUi

    void retranslateUi(QWidget *RemoveBook)
    {
        RemoveBook->setWindowTitle(QCoreApplication::translate("RemoveBook", "Form", nullptr));
        RemoveButton->setText(QCoreApplication::translate("RemoveBook", "Remove", nullptr));
        label->setText(QCoreApplication::translate("RemoveBook", "ISBN", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RemoveBook: public Ui_RemoveBook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REMOVEBOOK_H
