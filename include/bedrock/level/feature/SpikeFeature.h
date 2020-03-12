#pragma once

#include "../../util/Random.h"
#include "../../block/unmapped/BlockSource.h"
#include "../../actor/Actor.h"
#include "Feature.h"
#include "../../util/BlockPos.h"


class SpikeFeature : Feature {

public:
    class EndSpike;

    virtual void place(BlockSource &, BlockPos const&, Random &)const;
    ~SpikeFeature();
    void setCrystalInvulnerable(bool);
    SpikeFeature(SpikeFeature::EndSpike const&);
    void placeManually(BlockSource &, BlockPos const&, Random &, Actor *);
    void setCrystalBeamTarget(BlockPos const&);
    void postProcessMobsAt(BlockSource &, BlockPos const&, Random &)const;
    class EndSpike {

    public:
        void getHeight()const;
        void getCenterX()const;
        EndSpike(int, int, int, int, bool);
        void getRadius()const;
        void getTopBoundingBox()const;
        void getCenterZ()const;
        bool isGuarded()const;
        bool startsInChunk(BlockPos const&)const;
    };
};
