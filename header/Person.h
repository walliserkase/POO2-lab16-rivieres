/*
 * Laboratoire 16, Rivière
 *
 * Abstract class
 *
 * A Person represents an entity that can be located in a container.
 * There are some constraints forbid a Person to be in the same
 * container as another.
 *
 * Joël Kaufmann
 * Alexandre Vouilloz
 *
 * Date : 24.05.2018
 */

#ifndef LAB_16_RIVIERE_PERSON_H
#define LAB_16_RIVIERE_PERSON_H

#include <list>
#include <string>

using namespace std;

class Person {
private:
    string name_;   // the name of the Person
    pair<Person, std::list<Person>> companionAgainstOthers_; //TODO change
public:

    /**
     * Constructor of a Person
     */
     //TODO ???
    Person();

    /**
     * Constructor of a Person given its name
     * @param name the name of the Person
     */
    Person(const string& name);

    /**
     * Informs whether the Person can drive or not.
     * @return True if the Person is able to drive, false otherwise
     */
    bool canDrive() const;

    /**
     * Getter of the Person's name
     * @return the name of the Person
     */
    string getName() const;

    //TODO change
    pair<Person, std::list<Person> >& getCompanionAgainstOthers() const;

    //TODO change
    void setCompanionAgainstOthers(const pair<Person, std::list<Person> >& companionAgainstOthers);

    /**
     * operator == definiton
     * @param p the other Person to compare with
     * @return true if the Person are the same, false otherwise
     */
    bool operator==(const Person& p) const;

    // To use map class //TODO ??)
    bool operator<(const Person& p) const;

    /**
     * Stream operator definition
     */
    friend ostream& operator<<(ostream& os, const Person& p);
};


#endif //LAB_16_RIVIERE_PERSON_H
