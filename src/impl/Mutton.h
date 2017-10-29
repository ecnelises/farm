#ifndef MUTTON_H
#define MUTTON_H

#include "Food.h"

class Mutton : public Food {
public:
    Mutton() = default;
    virtual ~Mutton() = default;
    virtual const char* name() const override;
    virtual void usedBy(Player* player) override;
};

#endif
