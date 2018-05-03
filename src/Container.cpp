#include "../header/Container.h"

Container::Container(const string &name) : name_(name) {}

string Container::getName() const {
    return name_;
}

ostream& operator<<(ostream& os, const Container& container) {
    string content = "";
    for(Person p : container.people_) {
        content += (p.getName() + ", ");
    }
    return os << container.getName() << string(": < ") << content << string(" >");
}