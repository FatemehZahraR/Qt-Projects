/********************************************************************************
** Form generated from reading UI file 'addbook.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDBOOK_H
#define UI_ADDBOOK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddBook
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *NameLE;
    QSpacerItem *horizontalSpacer;
    QFormLayout *formLayout_2;
    QLabel *label_2;
    QLineEdit *AuthorLE;
    QSpacerItem *horizontalSpacer_2;
    QFormLayout *formLayout_3;
    QLabel *label_3;
    QLineEdit *ISBNLE;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *SaveButton;

    void setupUi(QWidget *AddBook)
    {
        if (AddBook->objectName().isEmpty())
            AddBook->setObjectName(QString::fromUtf8("AddBook"));
        AddBook->resize(294, 443);
        widget = new QWidget(AddBook);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(40, 40, 212, 359));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        NameLE = new QLineEdit(widget);
        NameLE->setObjectName(QString::fromUtf8("NameLE"));
        NameLE->setMinimumSize(QSize(200, 35));

        formLayout->setWidget(1, QFormLayout::LabelRole, NameLE);


        verticalLayout->addLayout(formLayout);

        horizontalSpacer = new QSpacerItem(158, 28, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(horizontalSpacer);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_2);

        AuthorLE = new QLineEdit(widget);
        AuthorLE->setObjectName(QString::fromUtf8("AuthorLE"));
        AuthorLE->setMinimumSize(QSize(200, 35));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, AuthorLE);


        verticalLayout->addLayout(formLayout_2);

        horizontalSpacer_2 = new QSpacerItem(158, 28, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(horizontalSpacer_2);

        formLayout_3 = new QFormLayout();
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_3);

        ISBNLE = new QLineEdit(widget);
        ISBNLE->setObjectName(QString::fromUtf8("ISBNLE"));
        ISBNLE->setMinimumSize(QSize(200, 35));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, ISBNLE);


        verticalLayout->addLayout(formLayout_3);

        horizontalSpacer_3 = new QSpacerItem(158, 28, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(horizontalSpacer_3);


        verticalLayout_2->addLayout(verticalLayout);

        SaveButton = new QPushButton(widget);
        SaveButton->setObjectName(QString::fromUtf8("SaveButton"));
        SaveButton->setMinimumSize(QSize(150, 40));

        verticalLayout_2->addWidget(SaveButton);


        retranslateUi(AddBook);

        QMetaObject::connectSlotsByName(AddBook);
    } // setupUi

    void retranslateUi(QWidget *AddBook)
    {
        AddBook->setWindowTitle(QCoreApplication::translate("AddBook", "Form", nullptr));
        label->setText(QCoreApplication::translate("AddBook", "Name", nullptr));
        label_2->setText(QCoreApplication::translate("AddBook", "Author's Name", nullptr));
        label_3->setText(QCoreApplication::translate("AddBook", "ISBN", nullptr));
        SaveButton->setText(QCoreApplication::translate("AddBook", "Save", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddBook: public Ui_AddBook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDBOOK_H
