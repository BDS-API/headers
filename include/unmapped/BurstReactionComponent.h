#pragma once

#include "../bedrock/block/unmapped/BlockSource"
#include "../bedrock/util/Vec3"


class BurstReactionComponent : LabTableReactionComponent {

public:
    virtual BurstReactionComponent::~BurstReactionComponent()
    virtual void _onEnd(LabTableReaction &, BlockSource &);

    BurstReactionComponent(ParticleType, Vec3 const&, Vec3 const&, int, int, int, bool, HashedString const&);
};
