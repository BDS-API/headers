#pragma once

#include "../bedrock/block/unmapped/BlockSource"
#include "../bedrock/util/Vec3"


class TerrainBurstReactionComponent : LabTableReactionComponent {

public:
    virtual TerrainBurstReactionComponent::~TerrainBurstReactionComponent()
    virtual void _onEnd(LabTableReaction &, BlockSource &);

    TerrainBurstReactionComponent(Block const&, Vec3 const&, Vec3 const&, int, bool);
};
