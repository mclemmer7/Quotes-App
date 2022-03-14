#include "mainwindow.h"
#include "home.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Home home;

    home.show();
   // w.show();
    return a.exec();
}
