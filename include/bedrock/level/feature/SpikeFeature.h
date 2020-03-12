#pragma once

#include "Feature.h"


class SpikeFeature : Feature {

public:
    class EndSpike;

    virtual void place(BlockSource &, BlockPos const&, Random &)const;
    ~SpikeFeature();
    void setCrystalBeamTarget(BlockPos const&);
    void placeManually(BlockSource &, BlockPos const&, Random &, Actor *);
    SpikeFeature(SpikeFeature::EndSpike const&);
    void setCrystalInvulnerable(bool);
    void postProcessMobsAt(BlockSource &, BlockPos const&, Random &)const;
    class EndSpike {

    public:
        void getHeight()const;
        bool startsInChunk(BlockPos const&)const;
        void getCenterZ()const;
        void getRadius()const;
        bool isGuarded()const;
        void getTopBoundingBox()const;
        void getCenterX()const;
        EndSpike(int, int, int, int, bool);
    };
};
