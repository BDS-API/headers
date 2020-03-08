#pragma once

#include "../../util/Random"
#include "../../block/unmapped/BlockSource"
#include "../../../unmapped/EndSpike"
#include "../../actor/Actor"
#include "../../util/BlockPos"


class SpikeFeature : Feature {

public:
    virtual SpikeFeature::~SpikeFeature()
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    SpikeFeature(SpikeFeature::EndSpike const&);
    void setCrystalInvulnerable(bool);
    void setCrystalBeamTarget(BlockPos const&);
    void placeManually(BlockSource &, BlockPos const&, Random &, Actor *);
    void postProcessMobsAt(BlockSource &, BlockPos const&, Random &)const;
};
