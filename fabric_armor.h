#pragma once

class eArmor;

class eFabricArmor
{
public:
    eFabricArmor (float probabilityHeavy         = 0.2,
                  float probabilityMedium       = 0.35,
                  float probabilityLight        = 0.3 ,
                  float probabilityMagic        = 0.15 );

    eArmor*    Make() const;
private:
    const float probabilityHeavy         =0;
    const float probabilityMedium       =0;
    const float probabilityLight        =0;
    const float probabilityMagic        =0;
};
