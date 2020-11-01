#include "scroll.h"

static string ToString(eScrollSpacial);

//---------------------------------------------------------------
eScroll::eScroll(eScrollSpacial _spacial,
                 int            _magicalDamage,
                 int            _phisicalDamage)
:eItemSlot(eSlotTypes::SCROLL)
, spacial(_spacial)
, magicalDamage(_magicalDamage)
, phisicalDamage(_phisicalDamage)
{}
//---------------------------------------------------------------

string eScroll::Dump() const
{
    stringstream ss;
    ss  <<eItemSlot::Dump()
        <<", Phisical damage: "           <<phisicalDamage
        <<", Magical damage: "            <<magicalDamage
        <<", Spacial: "                   <<ToString(spacial);
    return ss.str();
}

eFireScroll::eFireScroll()
: eScroll(eScrollSpacial::FIRE,
          rand()%10000)
{}

eFrostScroll::eFrostScroll()
: eScroll(eScrollSpacial::FROST,
          rand()%7000)
{}

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
       case eScrollSpacial::HEAL:           return "HEAL";
    }
    return "INVALID";
}
