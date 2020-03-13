#pragma once

#include "BiomeSource.h"


class FixedBiomeSource : BiomeSource {

public:
    ~FixedBiomeSource(); // _ZN16FixedBiomeSourceD2Ev
    virtual void fillBiomes(LevelChunk &)const; // _ZNK16FixedBiomeSource10fillBiomesER10LevelChunk
    virtual void getBiomeArea(BoundingBox const&, unsigned int)const; // _ZNK16FixedBiomeSource12getBiomeAreaERK11BoundingBoxj
//  virtual bool containsOnly(int, int, int, gsl::span<int const, -1l>)const; //TODO: incomplete function definition // _ZNK16FixedBiomeSource12containsOnlyEiiiN3gsl4spanIKiLln1EEE
    virtual void getBiome(int, int)const; // _ZNK16FixedBiomeSource8getBiomeEii
    FixedBiomeSource(Biome const&); // _ZN16FixedBiomeSourceC2ERK5Biome
};
