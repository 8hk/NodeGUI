//
// Created by Kerem on 20/02/08.
//

#ifndef NODEGUI_MAINWINDOW_H
#define NODEGUI_MAINWINDOW_H


#include <QMainWindow>
#include "Button/CustomButton.h"
#include "Grid/Grid.h"
#include <QCheckBox>
#include <vector>
#include <list>
#include <utility>
#include <QSignalMapper>
#include <memory>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
Q_OBJECT
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    std::shared_ptr <CustomButton>    buttonList;
    std::shared_ptr <QCheckBox>       offlineUsers;
    std::shared_ptr <QCheckBox>       onlineUsers;
    std::shared_ptr <Grid>            grid;
    std::shared_ptr<QPushButton>      startStopButton;
    std::shared_ptr<QVBoxLayout>      checkBoxLayout;
public slots:
    void changeButtonColor(int i);
private:
    Ui::MainWindow *ui;
    QSignalMapper *signalMapper;

};

#endif //NODEGUI_MAINWINDOW_H
