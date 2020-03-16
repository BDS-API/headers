#pragma once

#include "LabTableReactionComponent.h"


class BurstReactionComponent : public LabTableReactionComponent {

public:
    virtual ~BurstReactionComponent(); // _ZN22BurstReactionComponentD2Ev
    virtual void __fake_function0(); // fake
    virtual void _onEnd(LabTableReaction &, BlockSource &); // _ZN22BurstReactionComponent6_onEndER16LabTableReactionR11BlockSource
//    BurstReactionComponent(long, Vec3 const&, Vec3 const&, int, int, int, bool, HashedString const&); //TODO: incomplete function definition // _ZN22BurstReactionComponentC2E12ParticleTypeRK4Vec3S3_iiibRK12HashedString
};
