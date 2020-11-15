#include "fabric_fabric.h"
#include "item_slot.h"


eFabricFabric::eFabricFabric(
                float _probabilityElik,
                float _probabilityScroll,
                float _probabilityWeapon,
                float _probabilityArmor)
: probabilityElik(_probabilityElik)
, probabilityScroll(_probabilityScroll)
, probabilityWeapon(_probabilityWeapon)
, probabilityArmor(_probabilityArmor)
{}

eItemSlot* eFabricFabric::Make() const
{
    float t = probabilityElik;
    float r = (rand()%101)/100.0;
    if(r < t)                        return (eItemSlot*)fabric1.Make();
    t += probabilityScroll;
    if(r < t)                        return (eItemSlot*)fabric2.Make();
    t += probabilityWeapon;
    if(r < t)                        return (eItemSlot*)fabric3.Make();
    return (eItemSlot*)fabric4.Make();
}
