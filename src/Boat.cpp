#include "../header/Boat.h"

Boat::Boat(const string &name, Bank* startBank) : Container(name), currentBank_(startBank) {}

Bank& Boat::getCurrentBank() const {
    return *currentBank_;
}

void Boat::setCurrentBank(Bank *b) {
    currentBank_ = b;
}
