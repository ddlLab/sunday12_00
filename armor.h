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

class eHeavyArmor : public eArmor
{
public:
    eHeavyArmor();
    virtual ~eHeavyArmor()                   =default;
};
class eMediumArmor : public eArmor
{
public:
    eMediumArmor();
    virtual ~eMediumArmor()                 =default;
};
class eLightArmor : public eArmor
{
public:
    eLightArmor();
    virtual ~eLightArmor()                  =default;
};
class eMagicArmor : public eArmor
{
public:
    eMagicArmor();
    virtual ~eMagicArmor()                  =default;
};
