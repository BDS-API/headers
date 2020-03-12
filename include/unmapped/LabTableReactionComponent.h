#pragma once

#include "LabTableReaction.h"
#include "../bedrock/block/unmapped/BlockSource.h"


class LabTableReactionComponent {

public:
    virtual void _onTick(LabTableReaction &, BlockSource &);
    virtual void _onStart(LabTableReaction &, BlockSource &);
    virtual void _onEnd(LabTableReaction &, BlockSource &);
    ~LabTableReactionComponent();
    LabTableReactionComponent();
};
