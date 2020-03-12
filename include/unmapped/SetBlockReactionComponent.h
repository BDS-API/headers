#pragma once

#include "LabTableReactionComponent.h"


class SetBlockReactionComponent : LabTableReactionComponent {

public:
    virtual void _onEnd(LabTableReaction &, BlockSource &);
    ~SetBlockReactionComponent();
    SetBlockReactionComponent(BlockPos const&, Block const&);
};
