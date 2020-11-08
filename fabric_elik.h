#pragma once

class eElik;

class eFabricElik
{
public:
    eFabricElik(float probabilityHeal           = 0.5,
                float probabilityMana           = 0.2,
                float probabilityExp            = 0.3
                  );

    eElik*    Make() const;
private:
    const float probabilityHeal         =0;
    const float probabilityMana         =0;
    const float probabilityExp          =0;


};
