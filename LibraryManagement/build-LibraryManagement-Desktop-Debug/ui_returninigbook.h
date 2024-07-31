/********************************************************************************
** Form generated from reading UI file 'returninigbook.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RETURNINIGBOOK_H
#define UI_RETURNINIGBOOK_H

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

class Ui_ReturninigBook
{
public:
    QPushButton *SubmitButton;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout_2;
    QLabel *label;
    QLineEdit *ISBNLE;
    QSpacerItem *horizontalSpacer;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLineEdit *MembershipCodeLE;

    void setupUi(QWidget *ReturninigBook)
    {
        if (ReturninigBook->objectName().isEmpty())
            ReturninigBook->setObjectName(QString::fromUtf8("ReturninigBook"));
        ReturninigBook->resize(424, 441);
        SubmitButton = new QPushButton(ReturninigBook);
        SubmitButton->setObjectName(QString::fromUtf8("SubmitButton"));
        SubmitButton->setGeometry(QRect(130, 340, 150, 40));
        SubmitButton->setMinimumSize(QSize(150, 40));
        widget = new QWidget(ReturninigBook);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(80, 110, 260, 184));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label);

        ISBNLE = new QLineEdit(widget);
        ISBNLE->setObjectName(QString::fromUtf8("ISBNLE"));
        ISBNLE->setMinimumSize(QSize(250, 40));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, ISBNLE);


        verticalLayout->addLayout(formLayout_2);

        horizontalSpacer = new QSpacerItem(228, 28, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(horizontalSpacer);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        MembershipCodeLE = new QLineEdit(widget);
        MembershipCodeLE->setObjectName(QString::fromUtf8("MembershipCodeLE"));
        MembershipCodeLE->setMinimumSize(QSize(250, 40));

        formLayout->setWidget(1, QFormLayout::LabelRole, MembershipCodeLE);


        verticalLayout->addLayout(formLayout);


        retranslateUi(ReturninigBook);

        QMetaObject::connectSlotsByName(ReturninigBook);
    } // setupUi

    void retranslateUi(QWidget *ReturninigBook)
    {
        ReturninigBook->setWindowTitle(QCoreApplication::translate("ReturninigBook", "Form", nullptr));
        SubmitButton->setText(QCoreApplication::translate("ReturninigBook", "Submit", nullptr));
        label->setText(QCoreApplication::translate("ReturninigBook", "ISBN", nullptr));
        label_2->setText(QCoreApplication::translate("ReturninigBook", "Membership Code", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ReturninigBook: public Ui_ReturninigBook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RETURNINIGBOOK_H
