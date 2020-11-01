#pragma once

#include "item_slot.h"

//---------------------------------------------------------------
class eWeapon : public eItemSlot
{
public:
    eWeapon();

    virtual ~eWeapon()              =default;
    virtual string Dump()             const override;
protected:
    int                 phisicalDamage=0;
    int                 magicalDamage=0;
    int                 criticalDamage=0;
};


//---------------------------------------------------------------
class eSword : public eWeapon
{
    public:
    eSword();

    virtual ~eSword()                  =default;
    virtual string Dump()                const override;
};
