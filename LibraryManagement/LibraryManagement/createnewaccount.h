#ifndef CREATENEWACCOUNT_H
#define CREATENEWACCOUNT_H

#include <QMainWindow>
#include <QString>

namespace Ui {
class CreateNewAccount;
}

class CreateNewAccount : public QMainWindow
{
    Q_OBJECT
    QString InputAdministatorPass,NewUsername, NewPassword;

public:
    explicit CreateNewAccount(QWidget *parent = nullptr);
    ~CreateNewAccount();
    void Set();
    bool AdministratorPass ();
    bool ValidUsername ();
    void CreateAcc ();

private slots:
    void on_SubmitButton_clicked();

private:
    Ui::CreateNewAccount *ui;
};

#endif // CREATENEWACCOUNT_H
