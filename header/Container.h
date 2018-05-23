/*
 * Laboratoire 16, Rivière
 *
 * Abstract Class
 * A container represents a place that can contains Persons.
 *
 * Joël Kaufmann
 * Alexandre Vouilloz
 *
 * Date : 24.05.2018
 */

#ifndef LAB_16_RIVIERE_CONTAINER_H
#define LAB_16_RIVIERE_CONTAINER_H

#include <list>
#include <string>
#include "Person.h"

using namespace std;

class Container {
private:
    string name_;           // container's name
    list<Person> people_;   // list of people in the container //TODO list de pointeurs
public:
    // TODO: debug only
    //Container();

    /**
     * Constructor
     * @param name container's name
     */
    Container(const string& name); // TODO: doit être utilisé seulement par les sous-classes

    /**
     * Getter of the name
     * @return the container's name
     */
    string getName() const;

    /**
     * Add a Person to the container
     * @param p the Person to add
     */
    void addPerson(const Person& p);

    /**
     * Remove a Person from the container
     * @param p the Person to remove
     */
    void removePerson(const Person& p);

    /**
     * Check whether a Person is in the container
     * @param p the person to find
     * @return True : if the Person was found in the container,
     * False: otherwise
     */
    bool contains(const Person& p) const;

    /**
     * Get the number of people in the container.
     * @return the number of poeple in the container
     */
    unsigned int getPeopleCount() const;

    /**
     * operator == definition.
     * @param o the other instance
     * @return true : if the containers are the same, false otherwise
     */
    bool operator==(const Container& o) const;

    /**
     * Stream operator.
     */
    friend ostream& operator<<(ostream& os, const Container& container);
};


#endif //LAB_16_RIVIERE_CONTAINER_H
