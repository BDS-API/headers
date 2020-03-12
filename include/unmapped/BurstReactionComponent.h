#pragma once

#include "LabTableReactionComponent.h"


class BurstReactionComponent : LabTableReactionComponent {

public:
    ~BurstReactionComponent();
    virtual void _onEnd(LabTableReaction &, BlockSource &);
//  BurstReactionComponent(ParticleType, Vec3 const&, Vec3 const&, int, int, int, bool, HashedString const&); //TODO: incomplete function definition
};
