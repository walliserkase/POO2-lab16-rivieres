#include "../header/Person.h"
#include "../header/Constraint.h"

Constraint::Constraint(const Person &subject, const Person &protector, const Person &agressor) :
        subject_(subject), protector_(protector), agressor_(agressor) {}

const Person& Constraint::getSubject() const {
    return subject_;
}

const Person& Constraint::getProtector() const {
    return protector_;
}

const Person& Constraint::getAgressor() const {
    return agressor_;
}