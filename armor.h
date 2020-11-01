#pragma once

#include "item_slot.h"
//---------------------------------------------------------------
enum class eArmorSpacial
{
  INVALID = -1,
  HEAVY,
  LIGHT,
  MAGIC,
  MEDIUM,
};

//---------------------------------------------------------------

class eArmor : public eItemSlot
{
public:
    eArmor(eArmorSpacial spacial,
            int phisicalResistense,
            int magicResistense );
    virtual ~eArmor()                    =default;

    virtual string Dump()                const override;
protected:
    const int              phisicalResistense  =   0;
    const int              magicResistense     =   0;
    const eArmorSpacial    spacial             =   eArmorSpacial::INVALID;
};

class eHevyArmor : public eArmor
{
public:
    eHevyArmor();
    virtual ~eHevyArmor()                  =default;
};
