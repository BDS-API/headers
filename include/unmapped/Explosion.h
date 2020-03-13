#pragma once



class Explosion {

public:
    ~Explosion(); // _ZN9ExplosionD2Ev
    Explosion(BlockSource &, Actor *, Vec3 const&, float); // _ZN9ExplosionC2ER11BlockSourceP5ActorRK4Vec3f
    void explode(); // _ZN9Explosion7explodeEv
    void finalizeExplosion(); // _ZN9Explosion17finalizeExplosionEv
    void getFire()const; // _ZNK9Explosion7getFireEv
    void setFire(bool); // _ZN9Explosion7setFireEb
    void setBreaking(bool); // _ZN9Explosion11setBreakingEb
    void setAllowUnderwater(bool); // _ZN9Explosion18setAllowUnderwaterEb
    void getToBlow(); // _ZN9Explosion9getToBlowEv
    void setMaxResistance(float); // _ZN9Explosion16setMaxResistanceEf
};
