#pragma once

#include "../bedrock/util/Vec3.h"
#include "../bedrock/actor/Actor.h"
#include "../bedrock/block/unmapped/BlockSource.h"


class Explosion {

public:

    ~Explosion();
    Explosion(BlockSource &, Actor *, Vec3 const&, float);
    void explode();
    void finalizeExplosion();
    void getFire()const;
    void setFire(bool);
    void setBreaking(bool);
    void setAllowUnderwater(bool);
    void getToBlow();
    void setMaxResistance(float);
};
