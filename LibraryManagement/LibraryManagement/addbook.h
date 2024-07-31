#ifndef ADDBOOK_H
#define ADDBOOK_H

#include <QWidget>
#include <QString>

namespace Ui {
class AddBook;
}

class AddBook : public QWidget
{
    Q_OBJECT

public:
    explicit AddBook(QWidget *parent = nullptr);
    ~AddBook();

private slots:
    void on_SaveButton_clicked();

private:
    Ui::AddBook *ui;
};

#endif // ADDBOOK_H
