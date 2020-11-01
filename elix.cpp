#include "elix.h"
#include <windows.h>
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
