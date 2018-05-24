/*
 * Laboratoire 16, Rivière
 *
 * A Constraint is a "statement" that has to be verified
 * to move a Person.
 *
 * A subject can be moved to its aggressor's container, only if its
 * protector is also there.
 *
 * Joël Kaufmann
 * Alexandre Vouilloz
 *
 * Date : 24.05.2018
 */

#ifndef LAB_16_RIVIERE_CONSTRAINT_H
#define LAB_16_RIVIERE_CONSTRAINT_H


#include "Person.h"

class Constraint {
private:
    const Person * const subject_;  // subject person
    const Person * const protector_;// person that protects the subject from aggressor
    const Person * const aggressor_; // person that cannot be alone with subject
public:
    /**
     * Constructor
     * @param subject   the person on wich is the constraint
     * @param protector the subject's protector from aggressor
     * @param aggressor  the person that cannot be alone with the subjet
     */
    Constraint(const Person& subject, const Person& protector, const Person& aggressor);

    /**
     * Getter of subjet.
     * @return the subject
     */
    const Person * const getSubject() const;

    /**
     * Getter of protector
     * @return the constraint's subject protector
     */
    const Person * const getProtector() const;

    /**
     * Getter of aggressor
     * @return the constraint's subject aggressor
     */
    const Person * const getAggressor() const;
};


#endif //LAB_16_RIVIERE_CONSTRAINT_H
