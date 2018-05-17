#ifndef LAB_16_RIVIERE_PERSON_H
#define LAB_16_RIVIERE_PERSON_H

#include <string>

using namespace std;

class Person {
private:
    string name_;
public:
    Person();
    Person(const string& name);
    bool canDrive() const;
    string getName() const;
    bool operator==(const Person& p) const;
};


#endif //LAB_16_RIVIERE_PERSON_H
