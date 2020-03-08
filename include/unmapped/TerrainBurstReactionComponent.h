#pragma once

#include "../bedrock/util/Vec3"
#include "../bedrock/block/unmapped/BlockSource"


class TerrainBurstReactionComponent : LabTableReactionComponent {

public:
    TerrainBurstReactionComponent::~TerrainBurstReactionComponent()
    virtual void _onEnd(LabTableReaction &, BlockSource &);

    TerrainBurstReactionComponent(Block const&, Vec3 const&, Vec3 const&, int, bool);
};
