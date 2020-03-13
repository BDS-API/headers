#pragma once

#include "LabTableReactionComponent.h"


class PlaySoundReactionComponent : LabTableReactionComponent {

public:
    ~PlaySoundReactionComponent(); // _ZN26PlaySoundReactionComponentD2Ev
    virtual void _onEnd(LabTableReaction &, BlockSource &); // _ZN26PlaySoundReactionComponent6_onEndER16LabTableReactionR11BlockSource
//  PlaySoundReactionComponent(LevelSoundEvent); //TODO: incomplete function definition // _ZN26PlaySoundReactionComponentC2E15LevelSoundEvent
};
