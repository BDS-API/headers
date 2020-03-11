#pragma once

#include "../bedrock/block/unmapped/BlockSource.h"
#include "./LabTableReactionComponent.h"
#include "./LabTableReaction.h"


class PlaySoundReactionComponent : LabTableReactionComponent {

public:
    virtual ~PlaySoundReactionComponent();
    virtual void _onEnd(LabTableReaction &, BlockSource &);

//  PlaySoundReactionComponent(LevelSoundEvent); //TODO: incomplete function definition
};
