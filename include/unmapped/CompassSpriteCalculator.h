#pragma once

#include "../bedrock/block/unmapped/BlockSource"
#include "../bedrock/actor/Actor"
#include "../bedrock/util/Vec3"


class CompassSpriteCalculator {

public:

    CompassSpriteCalculator(void);
    void getFrame()const;
    void update(Actor &, bool);
    void updateFromPosition(BlockSource const&, float, float, float, bool, bool);
    void calculateFrame(BlockSource const&, Vec3 const&, float);
    void calculateFrame(BlockSource const&, float, float, float);
};
