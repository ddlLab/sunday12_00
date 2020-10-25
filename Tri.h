#pragma once

#include <sstream>
#include <string>

using std::stringstream;
using std::string;
using std::endl;


enum class eSlotTypes
{
  INVALID = -1,
  WEAPON,
  ARMOR,
  ELIK,
  SCROLL,
};



class eItemSlot
{
public:
    eItemSlot()                             = default;
    eItemSlot(const eItemSlot&)             = default;
    eItemSlot(eItemSlot&&)                  = default;

    eItemSlot(eSlotTypes);
    virtual ~eItemSlot()                    = default;

    eItemSlot& operator=(const eItemSlot&)  = default;
    eItemSlot& operator=(eItemSlot&&)       = default;

    void             Upgrade();
    virtual bool     IsBroken()     const;
    virtual string   Dump()         const;
    virtual int      Repair();




protected:
    int                 maxDurability   = 0;
    int                 durability      = 0;
    int                 cost            = 0;
    const eSlotTypes    type            = eSlotTypes::INVALID;
    int                 durabilityType  = 0;
    virtual void     Upgrade_();
    virtual bool     CanUpgrade()   const;
  /*
  Types of durability:
  1-can't rapair
  2-can rapair
  */
};

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

//---------------------------------------------------------------

enum class eScrollSpacial
{
  INVALID = -1,
  FIRE,
  FROST,
  ELICTRICITY,
  POISON,
  DARK,
};

//---------------------------------------------------------------

class eScroll : public eItemSlot
{
public:
    eScroll();

    virtual ~eScroll()                  =default;

    virtual string Dump()                const override;
protected:
    int                phisicalScrollDamage=0;
    int                magicalScrollDamage=0;
    eScrollSpacial     spacial=eScrollSpacial::INVALID;
};

//---------------------------------------------------------------

