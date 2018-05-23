/*
 * Laboratoire 16, Rivière
 *
 * Joël Kaufmann
 * Alexandre Vouilloz
 *
 * Date : 24.05.2018
 */

#include "../header/Bank.h"

unsigned int Bank::nbBanks_;

Bank::Bank(const string &name) : Container(name), bankId_(Bank::nbBanks_++) {}

unsigned int Bank::getBankId() const {
    return bankId_;
}