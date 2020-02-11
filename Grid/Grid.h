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
    Grid(QWidget *pWidget, std::shared_ptr<CustomButton> sharedPtr, std::pair<int, int> pair);
    Grid *getLayout() const;
};


#endif //NODEGUI_GRID_H
