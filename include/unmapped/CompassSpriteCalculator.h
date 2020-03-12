#pragma once

#include "../bedrock/block/unmapped/BlockSource.h"
#include "../bedrock/util/Vec3.h"
#include "../bedrock/actor/Actor.h"


class CompassSpriteCalculator {

public:
    void calculateFrame(BlockSource const&, float, float, float);
    void update(Actor &, bool);
    CompassSpriteCalculator();
    void updateFromPosition(BlockSource const&, float, float, float, bool, bool);
    void getFrame()const;
    void calculateFrame(BlockSource const&, Vec3 const&, float);
};
