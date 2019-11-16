#pragma once

class ItemReactionComponent : LabTableReactionComponent {

    virtual void ~ItemReactionComponent();
    virtual void ~ItemReactionComponent();
    virtual void _onStart(LabTableReaction &, BlockSource &);
    virtual void _onTick(LabTableReaction &, BlockSource &);
    virtual void _onEnd(LabTableReaction &, BlockSource &);
}
