#pragma once

#include "LargeCaveFeature.h"


class UnderwaterLargeCaveFeature : LargeCaveFeature {

public:
    ~UnderwaterLargeCaveFeature(); // _ZN26UnderwaterLargeCaveFeatureD2Ev
    virtual void carve(BlockVolume &, BiomeSource &, Random &, ChunkPos const&, Vec3 const&, Vec3 const&, int, int, int, int, int, int, float, float)const; // _ZNK26UnderwaterLargeCaveFeature5carveER11BlockVolumeR11BiomeSourceR6RandomRK8ChunkPosRK4Vec3SB_iiiiiiff
    UnderwaterLargeCaveFeature(); // _ZN26UnderwaterLargeCaveFeatureC2Ev
    bool isDiggable(Block const&); // _ZN26UnderwaterLargeCaveFeature10isDiggableERK5Block
};
