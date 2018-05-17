#ifndef LAB_16_RIVIERE_CONTROLLER_H
#define LAB_16_RIVIERE_CONTROLLER_H

#include <map>
#include "Bank.h"
#include "Boat.h"
#include "Person.h"

class Controller {
private:
    Bank banks_[2];
    Boat boat_;
    map<string, Person> people_;

public:
    Controller();
    // TODO: surcharger << un peu moche dans ce cas
    void display() const;
    const Person& getPerson(const string& p) const;
};


#endif //LAB_16_RIVIERE_CONTROLLER_H
