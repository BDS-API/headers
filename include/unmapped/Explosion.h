#pragma once



class Explosion {

public:
    void explode();
    void finalizeExplosion();
    Explosion(BlockSource &, Actor *, Vec3 const&, float);
    void getFire()const;
    void setBreaking(bool);
    void setAllowUnderwater(bool);
    void setMaxResistance(float);
    void setFire(bool);
    void getToBlow();
    ~Explosion();
};
