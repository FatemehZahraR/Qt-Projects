#ifndef LOGIN_H
#define LOGIN_H

#include <QMainWindow>
#include <QString>

QT_BEGIN_NAMESPACE
namespace Ui { class Login; }
QT_END_NAMESPACE

class Login : public QMainWindow
{
    Q_OBJECT
    QString InputUsername, InputPassword;
public:
    Login(QWidget *parent = nullptr);
    ~Login();
    void Set();

private slots:
    void on_LoginButton_clicked();

    void on_CreateNewAccButton_clicked();

private:
    Ui::Login *ui;
};
#endif // LOGIN_H
