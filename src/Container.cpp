#include "../header/Container.h"

Container::Container(const string &name) : name_(name) {}

void Container::addPerson(const Person &p) {
    people_.push_back(p);
}

string Container::getName() const {
    return name_;
}

ostream& operator<<(ostream& os, const Container& container) {
    string content = "";
    for(Person p : container.people_) {
        content += (p.getName() + ", ");
    }
    content = content.substr(0, content.length() - 2);
    return os << container.getName() << string(": < ") << content << string(" >");
}