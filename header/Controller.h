/*
 * Laboratoire 16, Rivière
 *
 * The Controller manages the interactions between
 * all the elements of the "game".
 *
 * Joël Kaufmann
 * Alexandre Vouilloz
 *
 * Date : 24.05.2018
 */

#ifndef LAB_16_RIVIERE_CONTROLLER_H
#define LAB_16_RIVIERE_CONTROLLER_H

#include <map>
#include "Bank.h"
#include "Boat.h"
#include "Person.h"
#include "Constraint.h"

class Controller {
private:
    Bank banks_[2]; // the 2 banks
    Boat boat_;     // the boat
    map<string, Person*> people_; // all the people
    list<Constraint*> constraints_; // constraints on the movements of people

public:
    /**
     * Constructor
     */
    Controller();
    // TODO: surcharger << un peu moche dans ce cas

    /**
     * Destructor
     */
    ~Controller();

    /**
     * Place all people on the first bank
     */
    void initPeopleStart();

    /**
    * Display the list of available commands
    */
    void displayMenu() const;

    /**
     * Displays the current state of the problem
     */
    void displayRiver() const;

    /**
     * Getter of a Person by its name
     * @param p the name of the Person to get
     * @return the Person
     */
    const Person& getPerson(const string& p) const;

    /**
     * Read input from console
     */
    void readInput();

    /**
     * Move a Person from a container to another, only if
     * requirements are met.
     * @param p the Person to move
     * @param from the source container
     * @param to  the destination container
     */
    void move(const Person& p, Container& from, Container& to);

    /**
     * Embark a Person, only if requirements are met.
     * @param p the person to embark
     */
    void embark(const Person& p);

    /**
     * Disembark a Person, only if requirements are met.
     * @param p the Person to disembark
     */
    void disembark(const Person& p);

    /**
     * Move the boat from one bank to the other.
     */
    void moveBoat();
};


#endif //LAB_16_RIVIERE_CONTROLLER_H
