#pragma once

#include "Feature.h"


class SpikeFeature : Feature {

public:
    class EndSpike;

    ~SpikeFeature(); // _ZN12SpikeFeatureD2Ev
    virtual void place(BlockSource &, BlockPos const&, Random &)const; // _ZNK12SpikeFeature5placeER11BlockSourceRK8BlockPosR6Random
    SpikeFeature(SpikeFeature::EndSpike const&); // _ZN12SpikeFeatureC2ERKNS_8EndSpikeE
    void setCrystalInvulnerable(bool); // _ZN12SpikeFeature22setCrystalInvulnerableEb
    void setCrystalBeamTarget(BlockPos const&); // _ZN12SpikeFeature20setCrystalBeamTargetERK8BlockPos
    void placeManually(BlockSource &, BlockPos const&, Random &, Actor *); // _ZN12SpikeFeature13placeManuallyER11BlockSourceRK8BlockPosR6RandomP5Actor
    void postProcessMobsAt(BlockSource &, BlockPos const&, Random &)const; // _ZNK12SpikeFeature17postProcessMobsAtER11BlockSourceRK8BlockPosR6Random
    class EndSpike {

    public:
        EndSpike(int, int, int, int, bool); // _ZN12SpikeFeature8EndSpikeC2Eiiiib
        bool startsInChunk(BlockPos const&)const; // _ZNK12SpikeFeature8EndSpike13startsInChunkERK8BlockPos
        void getCenterX()const; // _ZNK12SpikeFeature8EndSpike10getCenterXEv
        void getCenterZ()const; // _ZNK12SpikeFeature8EndSpike10getCenterZEv
        void getRadius()const; // _ZNK12SpikeFeature8EndSpike9getRadiusEv
        void getHeight()const; // _ZNK12SpikeFeature8EndSpike9getHeightEv
        bool isGuarded()const; // _ZNK12SpikeFeature8EndSpike9isGuardedEv
        void getTopBoundingBox()const; // _ZNK12SpikeFeature8EndSpike17getTopBoundingBoxEv
    };
};
