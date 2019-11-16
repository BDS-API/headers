#pragma once

class BurstReactionComponent : LabTableReactionComponent {

    virtual ~BurstReactionComponent();
    virtual ~BurstReactionComponent();
    virtual void _onStart(LabTableReaction &, BlockSource &);
    virtual void _onTick(LabTableReaction &, BlockSource &);
    virtual void _onEnd(LabTableReaction &, BlockSource &);
}
