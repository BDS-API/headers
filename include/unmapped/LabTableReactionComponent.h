#pragma once

class LabTableReactionComponent {

public:
    virtual LabTableReactionComponent::~LabTableReactionComponent();
    virtual void _onStart(LabTableReaction &, BlockSource &);
    virtual void _onTick(LabTableReaction &, BlockSource &);
    virtual void _onEnd(LabTableReaction &, BlockSource &);

    LabTableReactionComponent(void);
};
