#ifndef LAB_16_RIVIERE_CONSTRAINT_H
#define LAB_16_RIVIERE_CONSTRAINT_H


#include "Person.h"

class Constraint {
private:
    const Person& subject_;
    const Person& protector_;
    const Person& agressor_;
public:
    Constraint(const Person& subject, const Person& protector, const Person& agressor);
    const Person& getSubject() const;
    const Person& getProtector() const;
    const Person& getAgressor() const;
};


#endif //LAB_16_RIVIERE_CONSTRAINT_H
