#include "../header/Person.h"
#include "../header/Constraint.h"

Constraint::Constraint(const Person &subject, const Person &protector, const Person &agressor) :
        subject_(&subject), protector_(&protector), aggressor_(&agressor) {}

const Person *const Constraint::getSubject() const {
    return subject_;
}

const Person *const Constraint::getProtector() const {
    return protector_;
}

const Person *const Constraint::getAggressor() const {
    return aggressor_;
}