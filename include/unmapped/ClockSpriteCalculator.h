#pragma once

#include "../bedrock/block/unmapped/BlockSource.h"
#include "../bedrock/util/Vec3.h"
#include "../bedrock/actor/Actor.h"


class ClockSpriteCalculator {

public:
    void update(Actor &, bool);
    void getFrame()const;
    void calculateFrame(BlockSource const&, Vec3 const&);
    ClockSpriteCalculator();
    void update(BlockSource const&, Vec3 const&, bool);
    void calculateFrame(Actor const&);
};
