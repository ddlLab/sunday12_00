#include "weapon.h"
#include <windows.h>
static string ToString(eWeaponSpacial);


//---------------------------------------------------------------
eWeapon::eWeapon(eWeaponSpacial _spacial,
            int                 _criticalDamage,
            int                 _phisicalDamage)
:eItemSlot(eSlotTypes::WEAPON)
, spacial(_spacial)
, criticalDamage(_criticalDamage)
, phisicalDamage(_phisicalDamage)
{}
//---------------------------------------------------------------
string eWeapon::Dump() const
{
    stringstream ss;
    ss  << eItemSlot::Dump()
        <<", Phisical damage: "       <<phisicalDamage
        <<", Critical damage: "       <<criticalDamage
        <<", Spacial: "               <<ToString(spacial);
    return ss.str();
}
eSword::eSword()
: eWeapon(eWeaponSpacial::SWORD,
          rand()%100,
          rand()%100+50)
{}
eKnife::eKnife()
: eWeapon(eWeaponSpacial::KNIFE,
          rand()%50,
          rand()%50+50)
{}
ePickaxe::ePickaxe()
: eWeapon(eWeaponSpacial::PICKAXE,
          rand()%80,
          rand()%80+50)
{}
eAx::eAx()
: eWeapon(eWeaponSpacial::AX,
          rand()%85,
          rand()%85+50)
{}
eMusket::eMusket()
: eWeapon(eWeaponSpacial::MUSKET,
          rand()%100,
          rand()%100+50)
{}
eCrossbow::eCrossbow()
: eWeapon(eWeaponSpacial::CROSSBOW,
          rand()%100,
          rand()%100+50)
{}
string ToString(eWeaponSpacial _spacial)
{
    switch(_spacial)
    {
       case eWeaponSpacial::INVALID:        return "INVALID";
       case eWeaponSpacial::SWORD:          return "SWORD";
       case eWeaponSpacial::KNIFE:          return "KNIFE";
       case eWeaponSpacial::PICKAXE:        return "PICKAXE";
       case eWeaponSpacial::AX:             return "AX";
       case eWeaponSpacial::MUSKET:         return "MUSKET";
       case eWeaponSpacial::CROSSBOW:       return "CROSSBOW";
    }
    return "INVALID";
}




