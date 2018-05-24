/*
 * Laboratoire 16, Rivière
 *
 * Joël Kaufmann
 * Alexandre Vouilloz
 *
 * Date : 24.05.2018
 */

#include <algorithm>
#include <iostream>
#include <unordered_map>
#include "../header/Controller.h"

const string UI_BANK_LIMIT = "----------------------------------------------------------";
const string UI_RIVER = "==========================================================";

Controller::Controller() : banks_({Bank("Rive gauche"), Bank("Rive droite")}), boat_(Boat("Bateau", banks_)) {

    Person *pere = new Person("Pere", true);
    Person *mere = new Person("Mere", true);
    Person *paul = new Person("Paul");
    Person *pierre = new Person("Pierre");
    Person *julie = new Person("Julie");
    Person *jeanne = new Person("Jeanne");
    Person *policier = new Person("Policier", true);
    Person *voleur = new Person("Voleur");

    people_["Pere"] = pere;
    people_["Mere"] = mere;
    people_["Paul"] = paul;
    people_["Pierre"] = pierre;
    people_["Julie"] = julie;
    people_["Jeanne"] = jeanne;
    people_["Policier"] = policier;
    people_["Voleur"] = voleur;

    for (map<string, Person*>::iterator it = people_.begin(); it != people_.end(); it++) {
        banks_[0].addPerson(*it->second);
    }

    constraints_.push_back(new Constraint(*paul, *pere, *mere));
    constraints_.push_back(new Constraint(*pierre, *pere, *mere));
    constraints_.push_back(new Constraint(*julie, *mere, *pere));
    constraints_.push_back(new Constraint(*jeanne, *mere, *pere));
    constraints_.push_back(new Constraint(*pere, *policier, *voleur));
    constraints_.push_back(new Constraint(*mere, *policier, *voleur));
    constraints_.push_back(new Constraint(*paul, *policier, *voleur));
    constraints_.push_back(new Constraint(*pierre, *policier, *voleur));
    constraints_.push_back(new Constraint(*julie, *policier, *voleur));
    constraints_.push_back(new Constraint(*jeanne, *policier, *voleur));
}

Controller::~Controller() {
    for (map<string, Person*>::iterator it = people_.begin(); it != people_.end(); it++) {
        delete &(it->second);
    }

    for(list<Constraint*>::iterator it = constraints_.begin(); it != constraints_.end(); it++) {
        delete *it;
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
    } else {
        cout << endl;
    }
    cout << UI_RIVER << endl;
    if (boat_.getCurrentBank().getBankId() == 1) {
        cout << boat_ << endl;
    } else {
        cout << endl;
    }
    cout << UI_BANK_LIMIT << endl;
    cout << banks_[1] << endl;
    cout << UI_BANK_LIMIT << endl;
}

const Person &Controller::getPerson(const string &name) const {
    return *people_.at(name);
}

void Controller::readInput() {
    string input;
    getline(cin, input);
    if (input == "p") {

    } else if (input[0] == 'e' || input[0] == 'd') {
        string name = input.substr(2, input.size() - 1);
        map<string, Person*>::iterator it = people_.find(name);
        if (it == people_.end() || input[1] != ' ') {
            cout << "# Veuillez entrer une commande valide." << endl;
        } else {
            Person &p = *it->second;
            if (input[0] == 'e') {
                embark(p);
            } else {
                disembark(p);
            }
        }

    } else if (input == "m") {
        moveBoat();
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
    bool isLegalMove = true;
    Constraint *failedConstraint;

    for(list<Constraint*>::iterator it = constraints_.begin(); it != constraints_.end(); it++) {
        Constraint &c = **it;
        if(&p == c.getSubject() && to.contains(*c.getAggressor()) && !to.contains(*c.getProtector())) {
            isLegalMove = false;
            failedConstraint = &c;
            break;
        } else if (&p == c.getProtector() && from.contains(*c.getSubject()) && from.contains(*c.getAggressor())) {
            isLegalMove = false;
            failedConstraint = &c;
            break;
        } else if (&p == c.getAggressor() && to.contains(*c.getSubject()) && !to.contains(*c.getProtector())) {
            isLegalMove = false;
            failedConstraint = &c;
            break;
        }
    }

    if(isLegalMove) {
        from.removePerson(p);
        to.addPerson(p);
    } else {
        cout << "# " << *failedConstraint->getSubject() << " avec " << *failedConstraint->getAggressor() <<
             " sans " << *failedConstraint->getProtector() << endl;
    }
}

void Controller::embark(const Person &p) {
    if (boat_.contains(p)) {
        cout << "#" << p << " deja a bord." << endl;
    } else if (boat_.getPeopleCount() >= 2) {
        cout << "# Bateau deja plein." << endl;
    } else if(!boat_.getCurrentBank().contains(p)) {
        cout << "# Le bateau est sur l'autre rive." << endl;
    } else {
        Bank &bank = banks_[0].contains(p) ? banks_[0] : banks_[1];
        move(p, bank, boat_);
    }
}

void Controller::disembark(const Person &p) {
    if (!boat_.contains(p)) {
        cout << "#" << p << " n'est pas a bord." << endl;
    } else {
        move(p, boat_, boat_.getCurrentBank());
    }
}

void Controller::moveBoat() {
    // licence check
    if (boat_.hasDriver()) {
        Bank& newBank = boat_.getCurrentBank() == banks_[0] ? banks_[1] : banks_[0];
        boat_.setCurrentBank(&newBank);
    } else {
        cout << "# Le bateau n'a pas de chauffeur!" << endl;
    }

}