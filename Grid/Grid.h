//
// Created by Kerem on 20/02/09.
//

#ifndef NODEGUI_GRID_H
#define NODEGUI_GRID_H

#include <QGridLayout>
#include <utility>
#include <iostream>
#include "../Button/CustomButton.h"
class Grid:public QGridLayout {
    Grid * layout;
    Grid(QWidget *widget);
    void setLayout(Grid *layout);
public:
    Grid *getLayout() const;
    Grid(QWidget * widget,CustomButton * buttonList,std::pair<int,int> colRow);
    void add2Widget(QWidget *widget,std::pair<int,int> colRow);



};


#endif //NODEGUI_GRID_H
