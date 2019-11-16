#pragma once

class LabTableReactionComponent {

    virtual void ~LabTableReactionComponent();
    virtual void ~LabTableReactionComponent();
    virtual void _onStart(LabTableReaction &, BlockSource &);
    virtual void _onTick(LabTableReaction &, BlockSource &);
    virtual void _onEnd(LabTableReaction &, BlockSource &);
}
