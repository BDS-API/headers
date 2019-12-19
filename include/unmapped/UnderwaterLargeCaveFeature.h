#pragma once

class UnderwaterLargeCaveFeature : LargeCaveFeature {

public:
    virtual UnderwaterLargeCaveFeature::~UnderwaterLargeCaveFeature();
    virtual void carve(BlockVolume &, BiomeSource &, Random &, ChunkPos const&, Vec3 const&, Vec3 const&, int, int, int, int, int, int, float, float)const;

    UnderwaterLargeCaveFeature(void);
    bool isDiggable(Block const&);
};
