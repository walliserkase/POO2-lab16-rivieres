#ifndef LAB_16_RIVIERE_PERSON_H
#define LAB_16_RIVIERE_PERSON_H

#include <list>
#include <string>

using namespace std;

class Person {
private:
    string name_;
    pair<Person, std::list<Person>> companionAgainstOthers_;
public:
    Person();
    Person(const string& name);
    bool canDrive() const;
    string getName() const;
    pair<Person, std::list<Person> >& getCompanionAgainstOthers() const;
    void setCompanionAgainstOthers(const pair<Person, std::list<Person> >& companionAgainstOthers);
    bool operator==(const Person& p) const;
    // To use map class
    bool operator<(const Person& p) const;
    friend ostream& operator<<(ostream& os, const Person& p);
};


#endif //LAB_16_RIVIERE_PERSON_H
