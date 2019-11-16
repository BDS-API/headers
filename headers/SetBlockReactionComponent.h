#pragma once

class SetBlockReactionComponent : LabTableReactionComponent {

    virtual void ~SetBlockReactionComponent();
    virtual void ~SetBlockReactionComponent();
    virtual void _onStart(LabTableReaction &, BlockSource &);
    virtual void _onTick(LabTableReaction &, BlockSource &);
    virtual void _onEnd(LabTableReaction &, BlockSource &);
}
