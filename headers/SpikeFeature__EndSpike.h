#pragma once

class SpikeFeature::EndSpike {

public:

    void EndSpike(int, int, int, int, bool);
    void startsInChunk(BlockPos const&)const;
    void getCenterX(void)const;
    void getCenterZ(void)const;
    void getRadius(void)const;
    void getHeight(void)const;
    bool isGuarded(void)const;
    void getTopBoundingBox(void)const;
};
