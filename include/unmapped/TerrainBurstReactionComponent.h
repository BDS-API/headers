#pragma once

#include "LabTableReactionComponent.h"


class TerrainBurstReactionComponent : public LabTableReactionComponent {

public:
    virtual ~TerrainBurstReactionComponent(); // _ZN29TerrainBurstReactionComponentD2Ev
    virtual void __fake_function0(); // fake
    virtual void _onEnd(LabTableReaction &, BlockSource &); // _ZN29TerrainBurstReactionComponent6_onEndER16LabTableReactionR11BlockSource
    TerrainBurstReactionComponent(Block const&, Vec3 const&, Vec3 const&, int, bool); // _ZN29TerrainBurstReactionComponentC2ERK5BlockRK4Vec3S5_ib
};
