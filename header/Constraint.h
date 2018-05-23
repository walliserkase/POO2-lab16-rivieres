#ifndef LAB_16_RIVIERE_CONSTRAINT_H
#define LAB_16_RIVIERE_CONSTRAINT_H


#include "Person.h"

class Constraint {
private:
    const Person * const subject_;
    const Person * const protector_;
    const Person * const agressor_;
public:
    Constraint(const Person& subject, const Person& protector, const Person& agressor);
    const Person * const getSubject() const;
    const Person * const getProtector() const;
    const Person * const getAgressor() const;
};


#endif //LAB_16_RIVIERE_CONSTRAINT_H
