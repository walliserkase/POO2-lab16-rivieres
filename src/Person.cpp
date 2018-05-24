/*
 * Laboratoire 16, Rivière
 *
 * Joël Kaufmann
 * Alexandre Vouilloz
 *
 * Date : 24.05.2018
 */

#include <ostream>
#include "../header/Person.h"

Person::Person() : name_("default") {}

Person::Person(const string &name, bool canDrive) : name_(name), canDrive_(canDrive) {}

bool Person::canDrive() const {
    return canDrive_;
}

string Person::getName() const {
    return name_;
}

bool Person::operator==(const Person &p) const {
    return name_ == p.name_;
}

bool Person::operator<(const Person &p) const {
    return name_ < p.name_;
}

ostream& operator<<(ostream& os, const Person& p) {
    return os << p.getName();
}