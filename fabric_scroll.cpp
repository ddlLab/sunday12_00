#include "fabric_scroll.h"
#include "scroll.h"
#include "windows.h"

eFabricScroll::eFabricScroll(float _probabilityFire       ,
                             float _probabilityFrost      ,
                             float _probabilityElictricity,
                             float _probabilityPoison     ,
                             float _probabilityDark       ,
                             float _probabilityHeal       )
: probabilityFire(_probabilityFire)
, probabilityFrost(_probabilityFrost)
, probabilityElictricity(_probabilityElictricity)
, probabilityPoison(_probabilityPoison)
, probabilityDark(_probabilityDark)
, probabilityHeal(_probabilityHeal)
{}

eScroll* eFabricScroll::Make() const
{
    float t = probabilityFire;
    float r = (rand()%101)/100.0;
    if(r < t)                        return new eFireScroll(); //0..0.25
    t += probabilityFrost;
    if(r < t)                        return new eFrostScroll(); //0..0.35
    t += probabilityElictricity;
    if(r < t)                        return new eElictricityScroll();
    t += probabilityPoison;
    if(r < t)                        return new ePoisonScroll();
    t += probabilityDark;
    if(r < t)                        return new eDarkScroll();
    return new eHealScroll();
}
