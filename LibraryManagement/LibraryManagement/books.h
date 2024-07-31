#ifndef BOOKS_H
#define BOOKS_H

#include <QWidget>

namespace Ui {
class Books;
}

class Books : public QWidget
{
    Q_OBJECT

public:
    explicit Books(QWidget *parent = nullptr);
    ~Books();
    void display();

private slots:
    void on_AddBookButton_clicked();

    void on_RemoveButton_clicked();

private:
    Ui::Books *ui;
};

#endif // BOOKS_H
