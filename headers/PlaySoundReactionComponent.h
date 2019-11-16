#pragma once

class PlaySoundReactionComponent : LabTableReactionComponent {

    virtual void ~PlaySoundReactionComponent();
    virtual void ~PlaySoundReactionComponent();
    virtual void _onStart(LabTableReaction &, BlockSource &);
    virtual void _onTick(LabTableReaction &, BlockSource &);
    virtual void _onEnd(LabTableReaction &, BlockSource &);
}
