#pragma once

class eWeapon;

class eFabricWeapon
{
public:
    eFabricWeapon(float probabilitySword        = 0.05,
                  float probabilityKnife        = 0.25,
                  float probabilityPickaxe      = 0.1,
                  float probabilityAxe          = 0.2,
                  float probabilityMuscet       = 0.05,
                  float probabilityCrossbow     = 0.35);

    eWeapon*    Make() const;
private:
    const float probabilitySword        =0;
    const float probabilityKnife        =0;
    const float probabilityPickaxe      =0;
    const float probabilityAxe          =0;
    const float probabilityMuscet       =0;
    const float probabilityCrossbow     =0;
};
