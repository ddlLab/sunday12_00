#pragma once

#include "item_slot.h"
//---------------------------------------------------------------
enum class eWeaponSpacial
{
  INVALID = -1,
  SWORD,
  KNIFE,
  PICKAXE,
  AX,
  MUSKET,
  CROSSBOW,
};


//---------------------------------------------------------------
class eWeapon : public eItemSlot
{
public:
    eWeapon(eWeaponSpacial spacial,
            int criticalDamage,
            int phisicalDamage);

    virtual ~eWeapon()              =default;
    virtual string Dump()             const override;
protected:
    const int                 phisicalDamage=0;
    const int                 criticalDamage=0;
    const eWeaponSpacial    spacial           =   eWeaponSpacial::INVALID;
};


//---------------------------------------------------------------
class eSword : public eWeapon
{
    public:
    eSword();

    virtual ~eSword()                  =default;

};
//---------------------------------------------------------------
class eKnife : public eWeapon
{
    public:
    eKnife();

    virtual ~eKnife()                  =default;

};

//---------------------------------------------------------------
class ePickaxe : public eWeapon
{
    public:
    ePickaxe();

    virtual ~ePickaxe()                  =default;

};
//---------------------------------------------------------------
class eAx : public eWeapon
{
    public:
    eAx();

    virtual ~eAx()                  =default;

};
//---------------------------------------------------------------
class eMusket : public eWeapon
{
    public:
    eMusket();

    virtual ~eMusket()                  =default;

};
//---------------------------------------------------------------
class eCrossbow : public eWeapon
{
    public:
    eCrossbow();

    virtual ~eCrossbow()                  =default;

};

