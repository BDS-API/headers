#pragma once

#include "LabTableReaction.h"
#include "../bedrock/util/Vec3.h"
#include "../bedrock/block/unmapped/BlockSource.h"
#include "LabTableReactionComponent.h"
#include "HashedString.h"


class BurstReactionComponent : LabTableReactionComponent {

public:
    virtual void _onEnd(LabTableReaction &, BlockSource &);
    ~BurstReactionComponent();
//  BurstReactionComponent(ParticleType, Vec3 const&, Vec3 const&, int, int, int, bool, HashedString const&); //TODO: incomplete function definition
};
