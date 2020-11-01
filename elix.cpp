#include "elix.h"

static string ToString(eElikSpacial);


//---------------------------------------------------------------
eElik::eElik(eElikSpacial _spacial,
                 int            _giveHP,
                 int            _giveXP,
                 int            _giveMP)
:eItemSlot(eSlotTypes::ELIK)
, spacial(_spacial)
, giveHP(_giveHP)
, giveXP(_giveXP)
, giveMP(_giveMP)
{}
//---------------------------------------------------------------
string eElik::Dump() const
{
    stringstream ss;
    ss  <<eItemSlot::Dump()
        <<", Give HP: "           <<giveHP
        <<", Give Xp: "           <<giveXP
        <<", Give Mp: "           <<giveMP
        <<", Spacial: "           <<ToString(spacial);
    return ss.str();
}

eHealElik::eHealElik()
: eElik(eElikSpacial::HEAL,rand()%10000)
{}

eManaElik::eManaElik()
: eElik(eElikSpacial::MANA,0,0,rand()%10000)
{}

eExpElik::eExpElik()
: eElik(eElikSpacial::EXP,0,rand()%50000)
{}

string ToString(eElikSpacial _spacial)
{
    switch(_spacial)
    {
       case eElikSpacial::INVALID:        return "INVALID";
       case eElikSpacial::HEAL:           return "HEAL";
       case eElikSpacial::MANA:           return "MANA";
       case eElikSpacial::EXP:            return "EXP";
    }
    return "INVALID";
}
