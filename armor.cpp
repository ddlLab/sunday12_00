#include "armor.h"

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
