#include "fabric_armor.h"
#include "armor.h"
#include "windows.h"

eFabricArmor::eFabricArmor   (float _probabilityHeavy   ,
                              float _probabilityMedium ,
                              float _probabilityLight  ,
                              float _probabilityMagic  )
: probabilityHeavy(_probabilityHeavy)
, probabilityMedium(_probabilityMedium)
, probabilityLight(_probabilityLight)
, probabilityMagic(_probabilityMagic)
{}

eArmor* eFabricArmor::Make() const
{
    float t = probabilityMagic;
    float r = (rand()%101)/100.0;
    if(r < t)                        return new eMagicArmor();
    t += probabilityHeavy;
    if(r < t)                        return new eHeavyArmor();
    t += probabilityLight;
    if(r < t)                        return new eLightArmor();
    return new eMediumArmor();
}
