#pragma once

#include "../bedrock/util/BlockPos"


using namespace SpikeFeature;

class EndSpike {

public:

    EndSpike(int, int, int, int, bool);
    bool startsInChunk(BlockPos const&)const;
    void getCenterX()const;
    void getCenterZ()const;
    void getRadius()const;
    void getHeight()const;
    bool isGuarded()const;
    void getTopBoundingBox()const;
};
