#pragma once

#include "../../util/Random.h"
#include "../../../unmapped/EndSpike.h"
#include "../../actor/Actor.h"
#include "./Feature.h"
#include "../../util/BlockPos.h"
#include "../../block/unmapped/BlockSource.h"


class SpikeFeature : Feature {

public:
    virtual ~SpikeFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    SpikeFeature(SpikeFeature::EndSpike const&);
    void setCrystalInvulnerable(bool);
    void setCrystalBeamTarget(BlockPos const&);
    void placeManually(BlockSource &, BlockPos const&, Random &, Actor *);
    void postProcessMobsAt(BlockSource &, BlockPos const&, Random &)const;
};
