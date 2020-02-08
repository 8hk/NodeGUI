//
// Created by Kerem on 20/02/08.
//

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QGridLayout>
#include <vector>
#include <utility>
MainWindow::MainWindow(QWidget *parent)
        : QMainWindow(parent)
        , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    buttonList = new CustomButton(12);
    Grid grid(ui->centralwidget,buttonList,std::pair(4,3));
    /*
    QGridLayout *layout = new QGridLayout(ui->centralwidget);
    int buttonSize = 3;
    int start = 0;
    for (int i =0;i < buttonSize;i++) {
        for (int j=0;j<buttonSize;j++) {
            layout->addWidget(&buttonList->getInstance()->at(start++),j,i);

        }
    }*/
    QPushButton *startStopButton = new QPushButton();
    startStopButton->setText("Start");
    startStopButton->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
   // layout->addWidget(startStopButton,0,4);
   grid.add2Widget(startStopButton,std::pair(0,4));
    QObject::connect(startStopButton,SIGNAL(clicked()),this,SLOT(push()));

}
MainWindow::~MainWindow()
{
    delete ui;
}
