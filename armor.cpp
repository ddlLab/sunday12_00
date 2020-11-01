#include "armor.h"
#include <windows.h>
static string ToString(eArmorSpacial);

eArmor::eArmor(eArmorSpacial   _spacial,
                 int           _magicResistense,
                 int           _phisicalResistense)
:eItemSlot(eSlotTypes::ARMOR)
, spacial(_spacial)
, phisicalResistense(_phisicalResistense)
, magicResistense(_magicResistense)
{}



//---------------------------------------------------------------

string eArmor::Dump() const
{
    stringstream ss;
    ss  << eItemSlot::Dump()
        <<", phisicalResistense: "    <<phisicalResistense
        <<", magicResistense: "       <<magicResistense
        <<", Special: "       <<ToString(spacial);
    return ss.str();
}

string ToString(eArmorSpacial _spacial)
{
    switch(_spacial)
    {
       case eArmorSpacial::INVALID:         return "INVALID";
       case eArmorSpacial::HEAVY:           return "HEAVY";
       case eArmorSpacial::MEDIUM:          return "MEDIUM";
       case eArmorSpacial::LIGHT:           return "LIGHT";
       case eArmorSpacial::MAGIC:           return "MAGIC";
    }
    return "INVALID";
}
eHevyArmor :: eHevyArmor()
:eArmor(eArmorSpacial::HEAVY,rand()%100,rand()%1000)
{}
