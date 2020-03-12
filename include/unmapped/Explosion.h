#pragma once

#include "../bedrock/block/unmapped/BlockSource.h"
#include "../bedrock/actor/Actor.h"
#include "../bedrock/util/Vec3.h"


class Explosion {

public:
    ~Explosion();
    void getToBlow();
    void setMaxResistance(float);
    void setFire(bool);
    void explode();
    void setAllowUnderwater(bool);
    void finalizeExplosion();
    Explosion(BlockSource &, Actor *, Vec3 const&, float);
    void getFire()const;
    void setBreaking(bool);
};
