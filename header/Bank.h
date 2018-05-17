#ifndef LAB_16_RIVIERE_BANK_H
#define LAB_16_RIVIERE_BANK_H

#include "Container.h"

class Bank : public Container {
private:
    static unsigned int nbBanks_;
    unsigned int bankId_;
public:
    Bank(const string& name);
    unsigned int getBankId() const;
};


#endif //LAB_16_RIVIERE_BANK_H
