#ifndef LAB_16_RIVIERE_CONTROLLER_H
#define LAB_16_RIVIERE_CONTROLLER_H

#include "Bank.h"
#include "Boat.h"
#include "Person.h"

class Controller {
private:
    Bank banks_[2];
    Boat boat_;
public:
    Controller();
    // TODO: surcharger << un peu moche dans ce cas
    void display() const;
};


#endif //LAB_16_RIVIERE_CONTROLLER_H
