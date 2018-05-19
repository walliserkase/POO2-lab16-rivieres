#include <iostream>
#include <unordered_map>
#include "../header/Controller.h"

const string UI_BANK_LIMIT = "----------------------------------------------------------";
const string UI_RIVER = "==========================================================";

Controller::Controller() : banks_({Bank("Rive gauche"), Bank("Rive droite")}), boat_("Bateau", banks_[0]) {
    Person pere("Pere");
    Person mere("Mere");
    Person paul("Paul");
    Person pierre("Pierre");
    Person julie("Julie");
    Person jeanne("Jeanne");
    Person policier("Policier");
    Person voleur("Voleur");

    people_["Pere"] = pere;
    people_["Mere"] = mere;
    people_["Paul"] = paul;
    people_["Pierre"] = pierre;
    people_["Julie"] = julie;
    people_["Jeanne"] = jeanne;
    people_["Policier"] = policier;
    people_["Voleur"] = voleur;

    for (map<string, Person>::iterator it = people_.begin(); it != people_.end(); it++) {
        Person &p = it->second;
        banks_[0].addPerson(p);
    }
}

void Controller::init() {

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

void Controller::readInput() {
    string input;
    getline(cin, input);
    if (input == "p") {

    } else if (input[0] == 'e' || input[0] == 'd') {
        string name = input.substr(2, input.size() - 1);
        map<string, Person>::iterator it = people_.find(name);
        if (it == people_.end() || input[1] != ' ') {
            cout << "Veuillez entrer une commande valide." << endl;
        } else {
            Person &p = it->second;
            if (input[0] == 'e') {
                embark(p);
            } else {
                disembark(p);
            }
        }

    } else if (input == "m") {

    } else if (input == "r") {

    } else if (input == "q") {
        exit(EXIT_SUCCESS);
    } else if (input == "h") {

    } else {
        cout << "Veuillez entrer une commande valide." << endl;
    }
}

/* Responsible for enforcing side-to-side presence rules*/
void Controller::move(const Person &p, Container &from, Container &to) {
    // TODO: rules
    from.removePerson(p);
    to.addPerson(p);
}

void Controller::embark(const Person &p) {
    if (boat_.contains(p)) {
        cout << p << " deja a bord." << endl;
    } else if (boat_.getPeopleCount() >= 2) {
        cout << "Bateau deja plein." << endl;
    } else {
        Bank &bank = banks_[0].contains(p) ? banks_[0] : banks_[1];
        move(p, bank, boat_);
    }
}

void Controller::disembark(const Person &p) {
    if (!boat_.contains(p)) {
        cout << p << " n'est pas a bord." << endl;
    } else {
        move(p, boat_, boat_.getCurrentBank());
    }
}
