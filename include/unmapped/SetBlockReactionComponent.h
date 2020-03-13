#pragma once

#include "LabTableReactionComponent.h"


class SetBlockReactionComponent : LabTableReactionComponent {

public:
    ~SetBlockReactionComponent(); // _ZN25SetBlockReactionComponentD2Ev
    virtual void _onEnd(LabTableReaction &, BlockSource &); // _ZN25SetBlockReactionComponent6_onEndER16LabTableReactionR11BlockSource
    SetBlockReactionComponent(BlockPos const&, Block const&); // _ZN25SetBlockReactionComponentC2ERK8BlockPosRK5Block
};
