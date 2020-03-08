#pragma once

#include "../bedrock/util/BlockPos"
#include "../bedrock/block/unmapped/BlockSource"


class SetBlockReactionComponent : LabTableReactionComponent {

public:
    SetBlockReactionComponent::~SetBlockReactionComponent()
    virtual void _onEnd(LabTableReaction &, BlockSource &);

    SetBlockReactionComponent(BlockPos const&, Block const&);
};
