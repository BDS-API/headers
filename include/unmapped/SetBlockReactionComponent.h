#pragma once

#include "../bedrock/block/unmapped/BlockSource"
#include "../bedrock/util/BlockPos"


class SetBlockReactionComponent : LabTableReactionComponent {

public:
    virtual SetBlockReactionComponent::~SetBlockReactionComponent()
    virtual void _onEnd(LabTableReaction &, BlockSource &);

    SetBlockReactionComponent(BlockPos const&, Block const&);
};
