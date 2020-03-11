#pragma once

#include "./LabTableReactionComponent.h"
#include "../bedrock/block/unmapped/BlockSource.h"
#include "./LabTableReaction.h"
#include "./Block.h"
#include "../bedrock/util/BlockPos.h"


class SetBlockReactionComponent : LabTableReactionComponent {

public:
    virtual ~SetBlockReactionComponent();
    virtual void _onEnd(LabTableReaction &, BlockSource &);

    SetBlockReactionComponent(BlockPos const&, Block const&);
};
