#pragma once

#include "LabTableReactionComponent.h"


class PlaySoundReactionComponent : public LabTableReactionComponent {

public:
    virtual ~PlaySoundReactionComponent(); // _ZN26PlaySoundReactionComponentD2Ev
    virtual void __fake_function0(); // fake
    virtual void _onEnd(LabTableReaction &, BlockSource &); // _ZN26PlaySoundReactionComponent6_onEndER16LabTableReactionR11BlockSource
//    PlaySoundReactionComponent(long); //TODO: incomplete function definition // _ZN26PlaySoundReactionComponentC2E15LevelSoundEvent
};
