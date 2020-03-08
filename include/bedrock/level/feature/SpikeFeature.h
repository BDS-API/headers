#pragma once

#include "../../actor/Actor"
#include "../../util/Random"
#include "../../util/BlockPos"
#include "../../block/unmapped/BlockSource"
#include "../../../unmapped/EndSpike"


class SpikeFeature : Feature {

public:
    SpikeFeature::~SpikeFeature()
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    SpikeFeature(SpikeFeature::EndSpike const&);
    void setCrystalInvulnerable(bool);
    void setCrystalBeamTarget(BlockPos const&);
    void placeManually(BlockSource &, BlockPos const&, Random &, Actor *);
    void postProcessMobsAt(BlockSource &, BlockPos const&, Random &)const;
};
