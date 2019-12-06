#pragma once

class LabTableReactionComponent {

public:
    virtual ~LabTableReactionComponent();
    virtual void _onStart(LabTableReaction &, BlockSource &);
    virtual void _onTick(LabTableReaction &, BlockSource &);
    virtual void _onEnd(LabTableReaction &, BlockSource &);

    void LabTableReactionComponent(void);
};
