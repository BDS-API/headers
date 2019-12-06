#pragma once

class PlaySoundReactionComponent : LabTableReactionComponent {

public:
    virtual ~PlaySoundReactionComponent();
    virtual void _onEnd(LabTableReaction &, BlockSource &);

    void PlaySoundReactionComponent(LevelSoundEvent);
};
