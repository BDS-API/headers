#pragma once

#include "LabTableReaction.h"
#include "../bedrock/util/Vec3.h"
#include "../bedrock/block/unmapped/BlockSource.h"
#include "LabTableReactionComponent.h"
#include "Block.h"


class TerrainBurstReactionComponent : LabTableReactionComponent {

public:
    virtual void _onEnd(LabTableReaction &, BlockSource &);
    ~TerrainBurstReactionComponent();
    TerrainBurstReactionComponent(Block const&, Vec3 const&, Vec3 const&, int, bool);
};
