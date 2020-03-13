#pragma once



class LabTableReactionComponent {

public:
    ~LabTableReactionComponent(); // _ZN25LabTableReactionComponentD2Ev
    virtual void _onStart(LabTableReaction &, BlockSource &); // _ZN25LabTableReactionComponent8_onStartER16LabTableReactionR11BlockSource
    virtual void _onTick(LabTableReaction &, BlockSource &); // _ZN25LabTableReactionComponent7_onTickER16LabTableReactionR11BlockSource
    virtual void _onEnd(LabTableReaction &, BlockSource &); // _ZN25LabTableReactionComponent6_onEndER16LabTableReactionR11BlockSource
    LabTableReactionComponent(); // _ZN25LabTableReactionComponentC2Ev
};
