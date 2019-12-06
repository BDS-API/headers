#pragma once

class SetBlockReactionComponent : LabTableReactionComponent {

public:
    virtual ~SetBlockReactionComponent();
    virtual void _onEnd(LabTableReaction &, BlockSource &);

    void SetBlockReactionComponent(BlockPos const&, Block const&);
};
