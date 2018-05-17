#include <iostream>
#include "../header/Controller.h"

const string UI_BANK_LIMIT = "----------------------------------------------------------";
const string UI_RIVER = "==========================================================";

Controller::Controller() : banks_({Bank("Gauche"), Bank("Droite")}), boat_("Bateau", banks_[0]) {
    banks_[0].addPerson(Person("Pere"));
    banks_[0].addPerson(Person("Mere"));
    banks_[0].addPerson(Person("Paul"));
    banks_[0].addPerson(Person("Pierre"));
    banks_[0].addPerson(Person("Julie"));
    banks_[0].addPerson(Person("Jeanne"));
    banks_[0].addPerson(Person("Policier"));
    banks_[0].addPerson(Person("Voleur"));
}

void Controller::display() const {
    cout << UI_BANK_LIMIT << endl;
    cout << banks_[0] << endl;
    cout << UI_BANK_LIMIT << endl;
    if(boat_.getCurrentBank().getBankId() == 0) {
        cout << boat_ << endl;
    }
    cout << UI_RIVER << endl;
    if(boat_.getCurrentBank().getBankId() == 1) {
        cout << boat_ << endl;
    }
    cout << UI_BANK_LIMIT << endl;
    cout << banks_[1] << endl;
    cout << UI_BANK_LIMIT << endl;
}
