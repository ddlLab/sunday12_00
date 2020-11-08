#include "fabric_weapon.h"
#include "weapon.h"

eFabricWeapon::eFabricWeapon(float _probabilitySword,
                             float _probabilityKnife,
                             float _probabilityPickaxe,
                             float _probabilityAxe,
                             float _probabilityMuscet,
                             float _probabilityCrossbow)
: probabilitySword(_probabilitySword)
, probabilityKnife(_probabilityKnife)
, probabilityPickaxe(_probabilityPickaxe)
, probabilityAxe(_probabilityAxe)
, probabilityMuscet(_probabilityMuscet)
, probabilityCrossbow(_probabilityCrossbow)
{}

eWeapon* eFabricWeapon::Make() const
{
    float t = probabilitySword;
    float r = (rand()%101)/100.0;
    if(r < t)                        return new eSword();
    t += probabilityKnife;
    if(r < t)                        return new eKnife();
    t += probabilityPickaxe;
    if(r < t)                        return new ePickaxe();
    t += probabilityAxe;
    if(r < t)                        return new eAx();
    t += probabilityMuscet;
    if(r < t)                        return new eMusket();
    return new eCrossbow();
}
