#ifndef LAB_16_RIVIERE_MENU_H
#define LAB_16_RIVIERE_MENU_H

#include "Controller.h"

class Menu {
private:
    Controller& controller_;
public:
    Menu(Controller& controller);
    void display() const;
};


#endif //LAB_16_RIVIERE_MENU_H
