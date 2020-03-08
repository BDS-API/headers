#pragma once

#include "../bedrock/util/Vec3"
#include "../bedrock/block/unmapped/BlockSource"
#include "../bedrock/actor/Actor"


class ClockSpriteCalculator {

public:

    ClockSpriteCalculator(void);
    void getFrame()const;
    void update(Actor &, bool);
    void update(BlockSource const&, Vec3 const&, bool);
    void calculateFrame(Actor const&);
    void calculateFrame(BlockSource const&, Vec3 const&);
};
