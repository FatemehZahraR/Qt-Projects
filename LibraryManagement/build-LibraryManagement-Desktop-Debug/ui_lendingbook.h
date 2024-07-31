/********************************************************************************
** Form generated from reading UI file 'lendingbook.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LENDINGBOOK_H
#define UI_LENDINGBOOK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LendingBook
{
public:
    QLabel *label;
    QPushButton *SubmitButton;
    QTableWidget *tableWidget;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLineEdit *isbnLE;
    QFormLayout *formLayout_2;
    QLabel *label_3;
    QLineEdit *CodeLE;

    void setupUi(QWidget *LendingBook)
    {
        if (LendingBook->objectName().isEmpty())
            LendingBook->setObjectName(QString::fromUtf8("LendingBook"));
        LendingBook->resize(724, 581);
        label = new QLabel(LendingBook);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(80, 30, 161, 31));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);
        SubmitButton = new QPushButton(LendingBook);
        SubmitButton->setObjectName(QString::fromUtf8("SubmitButton"));
        SubmitButton->setGeometry(QRect(300, 500, 120, 35));
        SubmitButton->setMinimumSize(QSize(120, 35));
        tableWidget = new QTableWidget(LendingBook);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(70, 90, 581, 211));
        widget = new QWidget(LendingBook);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(220, 330, 310, 150));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        isbnLE = new QLineEdit(widget);
        isbnLE->setObjectName(QString::fromUtf8("isbnLE"));
        isbnLE->setMinimumSize(QSize(300, 40));
        isbnLE->setMaximumSize(QSize(200, 40));

        formLayout->setWidget(1, QFormLayout::LabelRole, isbnLE);


        verticalLayout->addLayout(formLayout);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_3);

        CodeLE = new QLineEdit(widget);
        CodeLE->setObjectName(QString::fromUtf8("CodeLE"));
        CodeLE->setMinimumSize(QSize(300, 40));
        CodeLE->setMaximumSize(QSize(250, 40));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, CodeLE);


        verticalLayout->addLayout(formLayout_2);


        retranslateUi(LendingBook);

        QMetaObject::connectSlotsByName(LendingBook);
    } // setupUi

    void retranslateUi(QWidget *LendingBook)
    {
        LendingBook->setWindowTitle(QCoreApplication::translate("LendingBook", "Form", nullptr));
        label->setText(QCoreApplication::translate("LendingBook", "Available Books:", nullptr));
        SubmitButton->setText(QCoreApplication::translate("LendingBook", "Submit", nullptr));
        label_2->setText(QCoreApplication::translate("LendingBook", "ISBN", nullptr));
        label_3->setText(QCoreApplication::translate("LendingBook", "Membership Code", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LendingBook: public Ui_LendingBook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LENDINGBOOK_H
