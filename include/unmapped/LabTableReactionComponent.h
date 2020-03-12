#pragma once



class LabTableReactionComponent {

public:
    virtual void _onTick(LabTableReaction &, BlockSource &);
    ~LabTableReactionComponent();
    virtual void _onEnd(LabTableReaction &, BlockSource &);
    virtual void _onStart(LabTableReaction &, BlockSource &);
    LabTableReactionComponent();
};
