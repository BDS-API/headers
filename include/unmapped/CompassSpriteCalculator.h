#pragma once

#include "../bedrock/actor/Actor"


class CompassSpriteCalculator {

public:

    CompassSpriteCalculator(void);
    void getFrame(void)const;
    void update(Actor &, bool);
    void updateFromPosition(BlockSource const&, float, float, float, bool, bool);
    void calculateFrame(BlockSource const&, Vec3 const&, float);
    void calculateFrame(BlockSource const&, float, float, float);
};
