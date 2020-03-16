#pragma once

#include "BiomeSource.h"


class FixedBiomeSource : public BiomeSource {

public:
    virtual ~FixedBiomeSource(); // _ZN16FixedBiomeSourceD2Ev
    virtual void __fake_function0(); // fake
    virtual void fillBiomes(LevelChunk &)const; // _ZNK16FixedBiomeSource10fillBiomesER10LevelChunk
    virtual void getBiomeArea(BoundingBox const&, unsigned int)const; // _ZNK16FixedBiomeSource12getBiomeAreaERK11BoundingBoxj
    virtual bool containsOnly__incomplete0(int, int, int, long)const; //TODO: incomplete function definition // _ZNK16FixedBiomeSource12containsOnlyEiiiN3gsl4spanIKiLln1EEE
    virtual void getBiome(int, int)const; // _ZNK16FixedBiomeSource8getBiomeEii
    FixedBiomeSource(Biome const&); // _ZN16FixedBiomeSourceC2ERK5Biome
};
