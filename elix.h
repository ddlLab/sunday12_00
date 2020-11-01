#pragma once

#include "item_slot.h"

//---------------------------------------------------------------
class eElik : public eItemSlot
{
public:
    eElik();

    virtual ~eElik()                   =default;
    virtual string Dump()                const override;
protected:
    int                 giveHP=0;
    int                 giveXp=0;
    int                 giveMp=0;
};
