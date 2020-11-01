#pragma once

#include "item_slot.h"
//---------------------------------------------------------------

class eArmor : public eItemSlot
{
public:
    eArmor();

    virtual         ~eArmor()               = default;

    virtual string  Dump()   const override;
protected:
    int                 defence=0;
    int                 phisicalResistense=0;
    int                 magicResistense=0;
};
