#pragma once

#include "../bedrock/util/Vec3.h"
#include "./LabTableReactionComponent.h"
#include "../bedrock/block/unmapped/BlockSource.h"
#include "./LabTableReaction.h"
#include "./Block.h"


class TerrainBurstReactionComponent : LabTableReactionComponent {

public:
    virtual ~TerrainBurstReactionComponent();
    virtual void _onEnd(LabTableReaction &, BlockSource &);

    TerrainBurstReactionComponent(Block const&, Vec3 const&, Vec3 const&, int, bool);
};
