#pragma once

class Explosion {

public:

    void Explosion(BlockSource &, Actor *, Vec3 const&, float);
    void explode(void);
    void finalizeExplosion(void);
    void getFire(void)const;
    void setFire(bool);
    void setBreaking(bool);
    void setAllowUnderwater(bool);
    void getToBlow(void);
    void setMaxResistance(float);
};
