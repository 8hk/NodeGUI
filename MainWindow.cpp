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
        ,signalMapper(new QSignalMapper)
{
    ui->setupUi(this);
    offlineUsers= std::make_shared< QCheckBox>("Offline Users");
    onlineUsers=std::make_shared< QCheckBox>("Online Users");
    checkBoxLayout = std::make_shared<QVBoxLayout>() ;
    checkBoxLayout->addWidget(offlineUsers.get());
    checkBoxLayout->addWidget(onlineUsers.get());
    buttonList =std::make_shared< CustomButton>(12);
    grid = std::make_shared<Grid>(ui->centralwidget,buttonList,std::pair(4,3));

    startStopButton = std::make_shared<QPushButton>();
    startStopButton->setText("Start");
    startStopButton->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    grid->getLayout()->addWidget(startStopButton.get(),0,4);
    grid->getLayout()->addLayout(checkBoxLayout.get(), 1, 4);
    int buttonListSize = buttonList->getSize();
    for (int i = 0; i <buttonListSize ; ++i) {
        connect(&buttonList->getInstance()->at(i),SIGNAL(clicked()),signalMapper, SLOT(map()));
        signalMapper->setMapping(&buttonList->getInstance()->at(i), i);

    }
    connect(signalMapper, SIGNAL(mapped(int)),
            this, SLOT(changeButtonColor(int)));

}
MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::changeButtonColor(int i) {
    CustomButton * button =  &buttonList->getInstance()->at(i);
    if(!button->getClicked()){
        if(offlineUsers->isChecked())
            buttonList->getInstance()->at(i).setStyleSheet("background-color: rgb(0, 0, 0);  border: rgb(0, 0, 0); ");
        else if(onlineUsers->isChecked())
            buttonList->getInstance()->at(i).setStyleSheet("background-color: rgb(0, 62, 255);  border: rgb(0, 0, 0); ");
        button->setClicked(true);
    }
    else{
        button->setStyleSheet("background-color: rgb(0, 170, 0); border: rgb(0, 0, 0); ");
        button->setClicked(false);
    }
}


