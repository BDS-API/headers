#pragma once

class LabTableReactionComponent {

    virtual ~LabTableReactionComponent();
    virtual ~LabTableReactionComponent();
    virtual void _onStart(LabTableReaction &, BlockSource &);
    virtual void _onTick(LabTableReaction &, BlockSource &);
    virtual void _onEnd(LabTableReaction &, BlockSource &);
}
