#pragma once

#include "LabTableReaction.h"
#include "../bedrock/util/BlockPos.h"
#include "../bedrock/block/unmapped/BlockSource.h"
#include "LabTableReactionComponent.h"
#include "Block.h"


class SetBlockReactionComponent : LabTableReactionComponent {

public:
    virtual void _onEnd(LabTableReaction &, BlockSource &);
    ~SetBlockReactionComponent();
    SetBlockReactionComponent(BlockPos const&, Block const&);
};
