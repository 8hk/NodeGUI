//
// Created by Kerem on 20/02/08.
//

#ifndef NODEGUI_MAINWINDOW_H
#define NODEGUI_MAINWINDOW_H


#include <QMainWindow>
#include "Button/CustomButton.h"
#include "Grid/Grid.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    CustomButton *buttonList;

private:
    Ui::MainWindow *ui;


};

#endif //NODEGUI_MAINWINDOW_H
