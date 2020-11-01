#pragma once

#include "item_slot.h"

//---------------------------------------------------------------
enum class eScrollSpacial
{
  INVALID = -1,
  FIRE,
  FROST,
  ELICTRICITY,
  POISON,
  DARK,
  HEAL,
};

//---------------------------------------------------------------

class eScroll : public eItemSlot
{
public:
    eScroll(eScrollSpacial spacial,
            int magicalDamage,
            int phisicalDamage = 0);
    virtual ~eScroll()                  =default;

    virtual string Dump()                const override;
protected:
    const int               phisicalDamage    =   0;
    const int               magicalDamage     =   0;
    const eScrollSpacial    spacial           =   eScrollSpacial::INVALID;
};


//---------------------------------------------------------------
class eFireScroll : public eScroll
{
public:
    eFireScroll();
    virtual ~eFireScroll()                  =default;
};
//---------------------------------------------------------------
class eFrostScroll : public eScroll
{
public:
    eFrostScroll();
    virtual ~eFrostScroll()                  =default;
};


