#include "fabric_elik.h"
#include "elix.h"

eFabricElik::eFabricElik(
                float _probabilityHeal,
                float _probabilityMana,
                float _probabilityExp)
: probabilityHeal(_probabilityHeal)
, probabilityMana(_probabilityMana)
, probabilityExp(_probabilityExp)
{}

eElik* eFabricElik::Make() const
{
    float t = probabilityHeal;
    float r = (rand()%101)/100.0;
    if(r < t)                        return new eHealElik();
    t += probabilityMana;
    if(r < t)                        return new eManaElik();
    return new eExpElik();
}
