//
// Created by Kerem on 20/02/09.
//

#include "Grid.h"

Grid::Grid(QWidget *widget,CustomButton * buttonList, std::pair<int, int> colRow) {
    layout = new Grid(widget);
    int columnSize = colRow.first;
    int rowSize = colRow.second;
    int start = 0;
    for (int i =0;i < columnSize;i++) {
        for (int j=0;j<rowSize;j++) {
            layout->addWidget(&buttonList->getInstance()->at(start++),j,i);

        }
    }

}

Grid *Grid::getLayout() const {
    return layout;
}

void Grid::setLayout(Grid *layout) {
    Grid::layout = layout;
}

Grid::Grid(QWidget *widget):QGridLayout(widget){
//    layout = new Grid(widget);
}

void Grid::add2Widget(QWidget *widget,std::pair<int,int> colRow) {
    getLayout()->addWidget(widget,colRow.first,colRow.second);
}

