#include <iostream>
#include <QApplication>
#include <QPushButton>
#include <QDebug>
#include "MainWindow.h"
int main(int argc, char** argv) {

    QApplication a(argc, argv);
    MainWindow main;
    main.show();
    return a.exec();
}
