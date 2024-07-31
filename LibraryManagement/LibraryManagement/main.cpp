#include "login.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Login w;
    QPalette palette;
    palette.setColor(QPalette::Window, QColor(0, 49, 83));
    palette.setColor(QPalette::WindowText, Qt::lightGray);
    palette.setColor(QPalette::Button, QColor(0, 49, 83).lighter(120));
    palette.setColor(QPalette::ButtonText, Qt::white);
    palette.setColor(QPalette::ToolTipBase, Qt::darkGray);
    palette.setColor(QPalette::Base, QColor(0, 49, 83).darker(150));
    palette.setColor(QPalette::Text, Qt::white);
    w.setPalette(palette);
    w.show();
    return a.exec();
}
