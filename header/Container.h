#ifndef LAB_16_RIVIERE_CONTAINER_H
#define LAB_16_RIVIERE_CONTAINER_H

#include <list>
#include <string>
#include "Person.h"

using namespace std;

class Container {
private:
    string name_;
    list<Person> people_;
public:
    Container(const string& name); // TODO: doit être utilisé seulement par les sous-classes
    string getName() const;
    void addPerson(const Person& p);
    friend ostream& operator<<(ostream& os, const Container& container);
};


#endif //LAB_16_RIVIERE_CONTAINER_H
