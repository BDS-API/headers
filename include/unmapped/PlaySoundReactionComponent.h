#pragma once

#include "LabTableReactionComponent.h"


class PlaySoundReactionComponent : LabTableReactionComponent {

public:
    ~PlaySoundReactionComponent();
    virtual void _onEnd(LabTableReaction &, BlockSource &);
//  PlaySoundReactionComponent(LevelSoundEvent); //TODO: incomplete function definition
};
