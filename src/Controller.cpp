#include <iostream>
#include "../header/Controller.h"

const string UI_BANK_LIMIT = "----------------------------------------------------------";
const string UI_RIVER = "==========================================================";

Controller::Controller() : banks_({Bank("Gauche"), Bank("Droite")}), boat_("Bateau", banks_[0]) {
    people_["Pere"] = Person("Pere");
    people_["Mere"] = Person("Mere");
    people_["Paul"] = Person("Paul");
    people_["Pierre"] = Person("Pierre");
    people_["Julie"] = Person("Julie");
    people_["Jeanne"] = Person("Jeanne");
    people_["Policier"] = Person("Policier");
    people_["Voleur"] = Person("Voleur");

    banks_[0].addPerson(people_["Pere"]);
    banks_[0].addPerson(people_["Mere"]);
    banks_[0].addPerson(people_["Paul"]);
    banks_[0].addPerson(people_["Pierre"]);
    banks_[0].addPerson(people_["Julie"]);
    banks_[0].addPerson(people_["Jeanne"]);
    banks_[0].addPerson(people_["Policier"]);
    banks_[0].addPerson(people_["Voleur"]);
}

void Controller::display() const {
    cout << UI_BANK_LIMIT << endl;
    cout << banks_[0] << endl;
    cout << UI_BANK_LIMIT << endl;
    if (boat_.getCurrentBank().getBankId() == 0) {
        cout << boat_ << endl;
    }
    cout << UI_RIVER << endl;
    if (boat_.getCurrentBank().getBankId() == 1) {
        cout << boat_ << endl;
    }
    cout << UI_BANK_LIMIT << endl;
    cout << banks_[1] << endl;
    cout << UI_BANK_LIMIT << endl;
}

const Person &Controller::getPerson(const string &name) const {
    return people_.at(name);
}

void Controller::readInput() const {
    char input;
    bool isCommandValid = true;
    do {
        scanf("%c", &input);
        switch (input) {
            case 'p':
                break;
            case 'e':
                break;
            case 'd':
                break;
            case 'm':
                break;
            case 'r':
                break;
            case 'q':
                exit(EXIT_SUCCESS);
                break;
            case 'h':
                break;
            default:
                cout << "Veuillez entrer une commande valide." << endl;
                isCommandValid = false;
                break;
        }
    } while (!isCommandValid);
}
