#include <ostream>
#include "../header/Person.h"

Person::Person() : name_("default") {}

Person::Person(const string &name) : name_(name) {}

bool Person::canDrive() const {
    //TODO
}

string Person::getName() const {
    return name_;
}

bool Person::operator==(const Person &p) const {
    return name_ == p.name_;
}

pair<Person, std::list<Person> >& Person::getCompanionAgainstOthers() const {
    return companionAgainstOthers_;
}

void Person::setCompanionAgainstOthers(const pair<Person, std::list<Person> >& companionAgainstOthers) {
    companionAgainstOthers_.first = companionAgainstOthers.first;
    companionAgainstOthers_.second = companionAgainstOthers.second;
}

bool Person::operator<(const Person &p) const {
    return name_ < p.name_;
}

ostream& operator<<(ostream& os, const Person& p) {
    return os << p.getName();
}