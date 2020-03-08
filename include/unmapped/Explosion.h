#pragma once

#include "../bedrock/block/unmapped/BlockSource"
#include "../bedrock/actor/Actor"
#include "../bedrock/util/Vec3"


class Explosion {

public:

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
