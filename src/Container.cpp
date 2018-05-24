/*
 * Laboratoire 16, Rivière
 *
 * Joël Kaufmann
 * Alexandre Vouilloz
 *
 * Date : 24.05.2018
 */

#include <algorithm>
#include "../header/Container.h"

using namespace std;

Container::Container(const string &name) : name_(name) {}

string Container::getName() const {
    return name_;
}

void Container::addPerson(const Person &p) {
    people_.push_back(p);
}

void Container::removePerson(const Person &p) {
    people_.remove(p);
}

void Container::removeAll() {
    people_.clear();
}

bool Container::contains(const Person &p) const {
    return find(people_.begin(), people_.end(), p) != people_.end();
}

unsigned int Container::getPeopleCount() const {
    return people_.size();
}

bool Container::operator==(const Container &o) const {
    return name_ == o.name_;
}

ostream& operator<<(ostream& os, const Container& container) {
    string content = "";
    for(Person p : container.people_) {
        content += (p.getName() + ", ");
    }
    content = content.substr(0, content.length() - 2);
    return os << container.getName() << string(": < ") << content << string(" >");
}