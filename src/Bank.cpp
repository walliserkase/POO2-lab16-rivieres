#include "../header/Bank.h"

unsigned int Bank::nbBanks_;

Bank::Bank(const string &name) : Container(name), bankId_(Bank::nbBanks_++) {}

unsigned int Bank::getBankId() const {
    return bankId_;
}