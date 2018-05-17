#ifndef LAB_16_RIVIERE_PERSON_H
#define LAB_16_RIVIERE_PERSON_H

#include <string>

using namespace std;

class Person {
private:
    string name_;
public:
    Person(const string& name);
    bool canDrive() const;
    string getName() const;
};


#endif //LAB_16_RIVIERE_PERSON_H
