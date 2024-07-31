#ifndef MAINMENU_H
#define MAINMENU_H

#include <QMainWindow>

namespace Ui {
class MainMenu;
}

class MainMenu : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainMenu(QWidget *parent = nullptr);
    ~MainMenu();
    bool BookToReturnForToday();

private slots:
    void on_BooksButton_clicked();

    void on_MembersButton_clicked();

    void on_LendingButton_clicked();

    void on_ReturningScheduleButton_clicked();

    void on_ReturningBookButton_clicked();

private:
    Ui::MainMenu *ui;
};

#endif // MAINMENU_H
