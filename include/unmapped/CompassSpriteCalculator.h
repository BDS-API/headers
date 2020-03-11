#pragma once

#include "../bedrock/util/Vec3.h"
#include "../bedrock/actor/Actor.h"
#include "../bedrock/block/unmapped/BlockSource.h"


class CompassSpriteCalculator {

public:

    CompassSpriteCalculator();
    void getFrame()const;
    void update(Actor &, bool);
    void updateFromPosition(BlockSource const&, float, float, float, bool, bool);
    void calculateFrame(BlockSource const&, Vec3 const&, float);
    void calculateFrame(BlockSource const&, float, float, float);
};
