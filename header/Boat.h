/*
 * Laboratoire 16, Rivière
 *
 * A boat is a container that may contain
 * at most 2 Persons.
 *
 * Only one Boat is used in the program.
 *
 * Joël Kaufmann
 * Alexandre Vouilloz
 *
 * Date : 24.05.2018
 */

#ifndef LAB_16_RIVIERE_BOAT_H
#define LAB_16_RIVIERE_BOAT_H

#include "Container.h"
#include "Bank.h"

class Boat : public Container {
private:
    Bank* currentBank_; // pointer to the bank where the boat is

public:
    /**
     * Constructor
     * @param name name of the Boat
     * @param startBank the bank location where it is created
     */
    Boat(const string& name, Bank* startBank);

    /**
     * Getter of the currentBank_
     * @return the bank where the boat currently is
     */
    Bank& getCurrentBank() const;

    /**
     * Setter of currentBank_
     * @param b the new bank where the boat should be
     */
    void setCurrentBank(Bank* b);
};


#endif //LAB_16_RIVIERE_BOAT_H
