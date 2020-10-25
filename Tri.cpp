#include "Tri.h"
#include <windows.h>


string ToString(eSlotTypes _type)
{
    switch(_type)
    {
       case eSlotTypes::INVALID: return "INVALID";
       case eSlotTypes::WEAPON:  return "WEAPON";
       case eSlotTypes::ARMOR:   return "ARMOR";
       case eSlotTypes::ELIK:    return "ELIK";
       case eSlotTypes::SCROLL:  return "SCROLL";
    }
    return "INVALID";
}

//---------------------------------------------------------------
string ToString(eScrollSpacial _spacial)
{
    switch(_spacial)
    {
       case eScrollSpacial::INVALID:        return "INVALID";
       case eScrollSpacial::FIRE:           return "FIRE";
       case eScrollSpacial::FROST:          return "FROST";
       case eScrollSpacial::ELICTRICITY:    return "ELICTRICITY";
       case eScrollSpacial::POISON:         return "POISON";
       case eScrollSpacial::DARK:           return "DARK";
    }
    return "INVALID";
}


//---------------------------------------------------------------
eItemSlot::eItemSlot(eSlotTypes _type)
:type (_type)
{}

//---------------------------------------------------------------
string eItemSlot::Dump() const
{
    stringstream ss;
    ss<<"Type: "<<ToString(type) <<", Durability: "<<durability <<", Cost: "<<cost;
    return ss.str();
}
//---------------------------------------------------------------
void eItemSlot::Upgrade()
{
    if(CanUpgrade())
    {
        Upgrade_();
    }
}
//---------------------------------------------------------------
bool eItemSlot::IsBroken() const
{
    return durability == 0;
}
//---------------------------------------------------------------
int eItemSlot::Repair()
{
    if(durabilityType == 1 )
    {
        return 0;
    }
    else if(durability < maxDurability)
    {
        int r = rand()%(maxDurability - durability);
        durability += r;
        return r;
    }
    return 0;
}
//---------------------------------------------------------------
bool eItemSlot::CanUpgrade() const { return false; }
//---------------------------------------------------------------
void eItemSlot::Upgrade_() {}
//---------------------------------------------------------------
eArmor::eArmor()
:eItemSlot(eSlotTypes::ARMOR)
{
    defence             = rand() % 100;
    phisicalResistense  = rand() % 30;
    magicResistense     = rand() % 30;
}
//---------------------------------------------------------------

string eArmor::Dump() const
{
    stringstream ss;
    ss  << eItemSlot::Dump()
        <<", defence: "               <<defence
        <<", phisicalResistense: "    <<phisicalResistense
        <<", magicResistense: "       <<magicResistense;
    return ss.str();
}
//---------------------------------------------------------------
eWeapon::eWeapon()
:eItemSlot(eSlotTypes::WEAPON)
{
    phisicalDamage  = rand() % 100;
    magicalDamage   = rand() % 100;
    criticalDamage  = rand() % 300;
}
//---------------------------------------------------------------
string eWeapon::Dump() const
{
    stringstream ss;
    ss  << eItemSlot::Dump()
        <<", Phisical damage: "       <<phisicalDamage
        <<", Magical damage: "        <<magicalDamage
        <<", Critical damage: "       <<criticalDamage;
    return ss.str();
}
//---------------------------------------------------------------

eElik::eElik()
:eItemSlot(eSlotTypes::ELIK)
{
    giveHP          = rand() % 100;
    giveXp          = rand() % 100;
    giveMp          = rand() % 100;
}
//---------------------------------------------------------------
string eElik::Dump() const
{
    stringstream ss;
    ss  <<eItemSlot::Dump()
        <<", Give HP: "           <<giveHP
        <<", Give Xp: "           <<giveXp
        <<", Give Mp: "           <<giveMp;
    return ss.str();
}

//---------------------------------------------------------------

eScroll::eScroll()
:eItemSlot(eSlotTypes::SCROLL)
{
    phisicalScrollDamage          = rand() % 100;
    magicalScrollDamage           = rand() % 100;
    spacial                       = (eScrollSpacial)(rand() % 5);
}

//---------------------------------------------------------------

string eScroll::Dump() const
{
    stringstream ss;
    ss  <<eItemSlot::Dump()
        <<", Phisical damage: "           <<phisicalScrollDamage
        <<", Magical damage: "            <<magicalScrollDamage
        <<", Spacial: "                   <<ToString(spacial);
    return ss.str();
}

//---------------------------------------------------------------
