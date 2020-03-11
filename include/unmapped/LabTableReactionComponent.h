#pragma once

#include "../bedrock/block/unmapped/BlockSource.h"
#include "./LabTableReaction.h"


class LabTableReactionComponent {

public:
    virtual ~LabTableReactionComponent();
    virtual void _onStart(LabTableReaction &, BlockSource &);
    virtual void _onTick(LabTableReaction &, BlockSource &);
    virtual void _onEnd(LabTableReaction &, BlockSource &);

    LabTableReactionComponent();
};
