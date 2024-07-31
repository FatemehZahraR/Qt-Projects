#include "members.h"
#include "ui_members.h"
#include <addmember.h>
#include <removemember.h>
#include <QFile>
#include <QDebug>
#include <QString>
#include <QListWidgetItem>

Members::Members(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Members)
{
    ui->setupUi(this);
    display();
}

Members::~Members()
{
    delete ui;
}

void Members::display() {
    QFile MemberData ("Members.csv");
    if (!MemberData.open(QIODevice::ReadOnly)) {
        qDebug () << "Member.csv file is not opened in Members::display() method";
        return;
    }
    ui->listWidget->clear();
    while (!MemberData.atEnd()) {
        QString line = MemberData.readLine();
        QStringList parts = line.split (',');
        QString ItemName = parts[0] + " " + parts[1];
        QListWidgetItem *item = new QListWidgetItem (ItemName, ui->listWidget);
        item->setFont(QFont("Helvetica",16));
    }
}

void Members::on_AddButton_clicked()
{
    AddMember *AddMemberWin = new AddMember();
    AddMemberWin->setWindowTitle("Add Member");
    AddMemberWin->show();
}


void Members::on_RemoveButton_clicked()
{
    RemoveMember *RemoveMemberWin = new RemoveMember();
    RemoveMemberWin->setWindowTitle("Remove Member");
    RemoveMemberWin->show();
}
