#pragma once

#include "../bedrock/util/Vec3"
#include "../bedrock/block/unmapped/BlockSource"


class BurstReactionComponent : LabTableReactionComponent {

public:
    BurstReactionComponent::~BurstReactionComponent()
    virtual void _onEnd(LabTableReaction &, BlockSource &);

    BurstReactionComponent(ParticleType, Vec3 const&, Vec3 const&, int, int, int, bool, HashedString const&);
};
