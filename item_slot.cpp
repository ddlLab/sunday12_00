#include "item_slot.h"


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
