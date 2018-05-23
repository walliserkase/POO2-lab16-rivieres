#include "../header/Person.h"
#include "../header/Constraint.h"

Constraint::Constraint(const Person& subject, const Person& protector, const Person& agressor) :
        subject_(subject), protector_(protector), agressor_(agressor) {}
