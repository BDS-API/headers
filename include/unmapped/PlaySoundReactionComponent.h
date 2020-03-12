#pragma once

#include "LabTableReaction.h"
#include "../bedrock/block/unmapped/BlockSource.h"
#include "LabTableReactionComponent.h"


class PlaySoundReactionComponent : LabTableReactionComponent {

public:
    virtual void _onEnd(LabTableReaction &, BlockSource &);
    ~PlaySoundReactionComponent();
//  PlaySoundReactionComponent(LevelSoundEvent); //TODO: incomplete function definition
};
