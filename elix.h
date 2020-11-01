#pragma once

#include "item_slot.h"

enum class eElikSpacial
{
  INVALID = -1,
  HEAL,
  MANA,
  EXP,
};
//---------------------------------------------------------------
class eElik : public eItemSlot
{
public:
    eElik(eElikSpacial spacial,
            int giveHP = 0,
            int giveXP = 0,
            int giveMP = 0);

    virtual ~eElik()                     =default;
    virtual string Dump()                const override;
protected:
    const int                 giveHP=0;
    const int                 giveXP=0;
    const int                 giveMP=0;
    const eElikSpacial        spacial           =   eElikSpacial::INVALID;
};

//---------------------------------------------------------------

class eHealElik : public eElik
{
public:
    eHealElik();
    virtual ~eHealElik()                  =default;
};
//---------------------------------------------------------------

class eManaElik : public eElik
{
public:
    eManaElik();
    virtual ~eManaElik()                  =default;
};
//---------------------------------------------------------------

class eExpElik : public eElik
{
public:
    eExpElik();
    virtual ~eExpElik()                  =default;
};
