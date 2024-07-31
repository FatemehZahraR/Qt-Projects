#include "addmember.h"
#include "ui_addmember.h"
#include <QFile>
#include <memberinfo.h>
#include <QTextStream>
#include <QDebug>

AddMember::AddMember(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AddMember)
{
    ui->setupUi(this);
}

AddMember::~AddMember()
{
    delete ui;
}

void AddMemberToFile (MemberInfo* NewMember) {
    QFile MemberData ("Members.csv");
    if (!MemberData.open(QIODevice::Append)) {
        qDebug () << "Members.csv file is not opened in AddMemberToFile function";
        return;
    }

    QTextStream write (&MemberData);
    write << NewMember->GetFirstName() << "," << NewMember->GetLastName() << "," << NewMember->GetMembershipCode() << ",0" << "\n";
}

void AddMember::on_SaveButton_clicked()
{
    MemberInfo *NewMember = new MemberInfo();
    NewMember->set(ui->FirstNameLE->text(),ui->LastNameLE->text());
    ui->MembershipLe->setText(NewMember->GenerateMembershipCode());
    AddMemberToFile(NewMember);
    delete NewMember;
}
