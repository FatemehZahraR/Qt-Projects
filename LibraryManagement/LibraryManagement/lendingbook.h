#ifndef LENDINGBOOK_H
#define LENDINGBOOK_H

#include <QWidget>

namespace Ui {
class LendingBook;
}

class LendingBook : public QWidget
{
    Q_OBJECT

public:
    explicit LendingBook(QWidget *parent = nullptr);
    ~LendingBook();
    void display ();

private slots:
    void on_SubmitButton_clicked();

private:
    Ui::LendingBook *ui;
};

#endif // LENDINGBOOK_H
