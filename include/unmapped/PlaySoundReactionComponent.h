#pragma once

#include "../bedrock/block/unmapped/BlockSource"


class PlaySoundReactionComponent : LabTableReactionComponent {

public:
    PlaySoundReactionComponent::~PlaySoundReactionComponent()
    virtual void _onEnd(LabTableReaction &, BlockSource &);

    PlaySoundReactionComponent(LevelSoundEvent);
};
