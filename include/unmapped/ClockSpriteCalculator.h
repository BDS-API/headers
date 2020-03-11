#pragma once

#include "../bedrock/util/Vec3.h"
#include "../bedrock/actor/Actor.h"
#include "../bedrock/block/unmapped/BlockSource.h"


class ClockSpriteCalculator {

public:

    ClockSpriteCalculator();
    void getFrame()const;
    void update(Actor &, bool);
    void update(BlockSource const&, Vec3 const&, bool);
    void calculateFrame(Actor const&);
    void calculateFrame(BlockSource const&, Vec3 const&);
};
