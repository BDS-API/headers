#pragma once

#include "CanyonFeature.h"


class UnderwaterCanyonFeature : public CanyonFeature {

public:
    virtual ~UnderwaterCanyonFeature(); // _ZN23UnderwaterCanyonFeatureD2Ev
    virtual void __fake_function0(); // fake
    virtual void carve__incomplete0(BlockVolume &, BiomeSource &, Random &, ChunkPos const&, Vec3 const&, Vec3 const&, int, int, int, int, int, int, float, float, long)const; //TODO: incomplete function definition // _ZNK23UnderwaterCanyonFeature5carveER11BlockVolumeR11BiomeSourceR6RandomRK8ChunkPosRK4Vec3SB_iiiiiiffN3gsl4spanIKfLln1EEE
    UnderwaterCanyonFeature(); // _ZN23UnderwaterCanyonFeatureC2Ev
};
