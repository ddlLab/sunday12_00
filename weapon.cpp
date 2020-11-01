#include "weapon.h"
#include <windows.h>
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
