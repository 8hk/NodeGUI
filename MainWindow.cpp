//
// Created by Kerem on 20/02/08.
//

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QGridLayout>
#include <utility>
MainWindow::MainWindow(QWidget *parent)
        : QMainWindow(parent)
        , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    buttonList = new CustomButton(12);
    Grid grid(ui->centralwidget,buttonList,std::pair(4,3));
    QPushButton *startStopButton = new QPushButton();
    startStopButton->setText("Start");
    startStopButton->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    grid.add2Widget(startStopButton,std::pair(0,4));
    QObject::connect(startStopButton,SIGNAL(clicked()),this,SLOT(push()));

}
MainWindow::~MainWindow()
{
    delete ui;
}
