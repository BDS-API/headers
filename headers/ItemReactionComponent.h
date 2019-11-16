#pragma once

class ItemReactionComponent : LabTableReactionComponent {

    virtual ~ItemReactionComponent();
    virtual ~ItemReactionComponent();
    virtual void _onStart(LabTableReaction &, BlockSource &);
    virtual void _onTick(LabTableReaction &, BlockSource &);
    virtual void _onEnd(LabTableReaction &, BlockSource &);
}
