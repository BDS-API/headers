#pragma once

#include "LabTableReactionComponent.h"


class TerrainBurstReactionComponent : LabTableReactionComponent {

public:
    virtual void _onEnd(LabTableReaction &, BlockSource &);
    ~TerrainBurstReactionComponent();
    TerrainBurstReactionComponent(Block const&, Vec3 const&, Vec3 const&, int, bool);
};
