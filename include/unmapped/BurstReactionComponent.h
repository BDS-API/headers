#pragma once

#include "LabTableReactionComponent.h"


class BurstReactionComponent : LabTableReactionComponent {

public:
    ~BurstReactionComponent(); // _ZN22BurstReactionComponentD2Ev
    virtual void _onEnd(LabTableReaction &, BlockSource &); // _ZN22BurstReactionComponent6_onEndER16LabTableReactionR11BlockSource
//  BurstReactionComponent(ParticleType, Vec3 const&, Vec3 const&, int, int, int, bool, HashedString const&); //TODO: incomplete function definition // _ZN22BurstReactionComponentC2E12ParticleTypeRK4Vec3S3_iiibRK12HashedString
};
