#pragma once

#include "../bedrock/util/Vec3.h"
#include "./LabTableReactionComponent.h"
#include "./HashedString.h"
#include "../bedrock/block/unmapped/BlockSource.h"
#include "./LabTableReaction.h"


class BurstReactionComponent : LabTableReactionComponent {

public:
    virtual ~BurstReactionComponent();
    virtual void _onEnd(LabTableReaction &, BlockSource &);

//  BurstReactionComponent(ParticleType, Vec3 const&, Vec3 const&, int, int, int, bool, HashedString const&); //TODO: incomplete function definition
};
