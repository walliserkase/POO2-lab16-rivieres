/*
 * Laboratoire 16, Rivière
 * *
 * A Bank is a container that may contain
 * all the Persons.
 *
 * There are 2 banks in the program.
 * Each bank is identifiable by its ID.
 *
 * Joël Kaufmann
 * Alexandre Vouilloz
 *
 * Date : 24.05.2018
 */

#ifndef LAB_16_RIVIERE_BANK_H
#define LAB_16_RIVIERE_BANK_H

#include "Container.h"

class Bank : public Container {
private:
    static unsigned int nbBanks_;   // amount of banks created so far
    unsigned int bankId_;           // current bank's unique ID

public:
    /**
     * Constructor
     * @param name the name of the bank
     */
    Bank(const string& name);       // constructor

    /**
     * Getter of bankId_.
     * @return the bank's ID
     */
    unsigned int getBankId() const;
};


#endif //LAB_16_RIVIERE_BANK_H
