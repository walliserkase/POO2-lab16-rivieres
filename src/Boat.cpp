/*
 * Laboratoire 16, Rivière
 *
 * Joël Kaufmann
 * Alexandre Vouilloz
 *
 * Date : 24.05.2018
 */

#include "../header/Boat.h"

Boat::Boat(const string &name, Bank* startBank) : Container(name), currentBank_(startBank) {}

Bank& Boat::getCurrentBank() const {
    return *currentBank_;
}

void Boat::setCurrentBank(Bank *b) {
    currentBank_ = b;
}

bool Boat::hasDriver() const {
    for(auto it = people_.begin(); it != people_.end(); it++) {
        if (it->canDrive()) {
            return true;
        }
    }
    return false;
}
