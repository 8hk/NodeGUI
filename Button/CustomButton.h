//
// Created by Kerem on 20/02/08.
//

#ifndef NODEGUI_CUSTOMBUTTON_H
#define NODEGUI_CUSTOMBUTTON_H


#include <QObject>
#include <QWidget>
#include <QPushButton>
#include <vector>
#include <memory>
#include <iostream>
#include <QCheckBox>
#include <utility>

class CustomButton: public QPushButton {
    Q_OBJECT
public:
    const std::shared_ptr<std::vector<CustomButton>> &getInstance() const;
    CustomButton();
    CustomButton(int size);
    void setSize(int size);
    int getSize() const;
    ~CustomButton();
    bool getClicked() const;
    void setClicked(bool value);
private:
    int size;
    bool clicked;
    std::shared_ptr<std::vector<CustomButton>> list;
};


#endif //NODEGUI_CUSTOMBUTTON_H
