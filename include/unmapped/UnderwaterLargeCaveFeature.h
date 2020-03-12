#pragma once

#include "LargeCaveFeature.h"


class UnderwaterLargeCaveFeature : LargeCaveFeature {

public:
    ~UnderwaterLargeCaveFeature();
    virtual void carve(BlockVolume &, BiomeSource &, Random &, ChunkPos const&, Vec3 const&, Vec3 const&, int, int, int, int, int, int, float, float)const;
    bool isDiggable(Block const&);
    UnderwaterLargeCaveFeature();
};
