#ifndef LAB_16_RIVIERE_BOAT_H
#define LAB_16_RIVIERE_BOAT_H

#include "Container.h"
#include "Bank.h"

class Boat : public Container {
private:
    Bank& currentBank_;
public:
    Boat(const string& name, Bank& startBank);
    Bank& getCurrentBank() const;
    void setCurrentBank(const Bank& b);
};


#endif //LAB_16_RIVIERE_BOAT_H
