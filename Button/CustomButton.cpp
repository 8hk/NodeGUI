//
// Created by Kerem on 20/02/08.
//

#include "CustomButton.h"

CustomButton::CustomButton() {
    this->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    setStyleSheet("background-color: rgb(0, 170, 0); border: rgb(0, 0, 0); ");
    connect(this,SIGNAL(clicked()),this,SLOT(changeColor()));
    setClicked(false);

}

CustomButton::CustomButton(int size):list(new std::vector<CustomButton>(size)) {
    setSize(size);
}

void CustomButton::setSize(int size) {
    this->size = size;
}

int CustomButton::getSize() {
    return  list->size();
}

CustomButton::~CustomButton() {
    if(list->size()){
        list->clear();
    }
}

bool CustomButton::getClicked() const {
    return clicked;
}

void CustomButton::setClicked(bool value) {
    this->clicked = value;
}

void CustomButton::changeColor() {
    if(!getClicked()){
        this->setStyleSheet("background-color: rgb(0, 0, 0);  border: rgb(0, 0, 0); ");
        setClicked(true);

    }
    else{
        this->setStyleSheet("background-color: rgb(0, 170, 0); border: rgb(0, 0, 0); ");
        setClicked(false);

    }
}

const std::shared_ptr<std::vector<CustomButton>> &CustomButton::getInstance() const {
    return list;
}
/*
void CustomButton::setList(const std::shared_ptr<std::vector<CustomButton>> &list) {
    CustomButton::list = list;
}
*/