#include <iostream>
#include "../header/Controller.h"

const string UI_BANK_LIMIT = "----------------------------------------------------------";
const string UI_RIVER = "==========================================================";

void Controller::display() const {
    cout << UI_BANK_LIMIT << endl;
    cout << banks_[0] << endl;
    cout << UI_BANK_LIMIT << endl;
    if(boat_.getCurrentBank().getBankId() == 0) {
        cout << boat_ << endl;
    }
    cout << UI_RIVER << endl;
    if(boat_.getCurrentBank().getBankId() == 1) {
        cout << boat_ << endl;
    }
    cout << UI_BANK_LIMIT << endl;
    cout << banks_[1] << endl;
    cout << UI_BANK_LIMIT << endl;
}
