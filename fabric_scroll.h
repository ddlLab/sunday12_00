#pragma once

class eScroll;

class eFabricScroll
{
public:
    eFabricScroll(float probabilityFire         = 0.05,
                  float probabilityFrost        = 0.25,
                  float probabilityElictricity  = 0.1,
                  float probabilityPoison       = 0.2,
                  float probabilityDark         = 0.05,
                  float probabilityHeal         = 0.35);

    eScroll*    Make() const;
private:
    const float probabilityFire         =0;
    const float probabilityFrost        =0;
    const float probabilityElictricity  =0;
    const float probabilityPoison       =0;
    const float probabilityDark         =0;
    const float probabilityHeal         =0;
};
