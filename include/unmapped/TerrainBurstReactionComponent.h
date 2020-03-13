#pragma once

#include "LabTableReactionComponent.h"


class TerrainBurstReactionComponent : LabTableReactionComponent {

public:
    ~TerrainBurstReactionComponent(); // _ZN29TerrainBurstReactionComponentD2Ev
    virtual void _onEnd(LabTableReaction &, BlockSource &); // _ZN29TerrainBurstReactionComponent6_onEndER16LabTableReactionR11BlockSource
    TerrainBurstReactionComponent(Block const&, Vec3 const&, Vec3 const&, int, bool); // _ZN29TerrainBurstReactionComponentC2ERK5BlockRK4Vec3S5_ib
};
