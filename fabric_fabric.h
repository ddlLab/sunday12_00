#pragma once
#include "fabric_elik.h"
#include "fabric_scroll.h"
#include "fabric_weapon.h"

class eItemSlot;

class eFabricFabric
{
public:
    eFabricFabric(float probabilityScroll           = 0.5,
                  float probabilityElik             = 0.3,
                  float probabilityWeapon           = 0.2

                  );

    eItemSlot*    Make() const;
private:
    const float probabilityScroll            =0;
    const float probabilityElik              =0;
    const float probabilityWeapon            =0;
    eFabricElik fabric1;
    eFabricScroll fabric2;
    eFabricWeapon fabric3;


};
