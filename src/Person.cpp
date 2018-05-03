#include <ostream>
#include "../header/Person.h"

Person::Person(const string &name) : name_(name) {}

bool Person::canDrive() const {
    //TODO
}

string Person::getName() const {
    return name_;
}

ostream& operator<<(ostream& os, const Person& p) {
    return os << p.getName();
}