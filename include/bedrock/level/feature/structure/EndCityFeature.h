#pragma once

#include "StructureFeature.h"


class EndCityFeature : StructureFeature {

public:
    virtual void createStructureStart(Dimension &, BiomeSource &, Random &, ChunkPos const&);
    ~EndCityFeature();
    virtual bool isFeatureChunk(BiomeSource const&, Random &, ChunkPos const&, unsigned int);
    virtual void getNearestGeneratedFeature(Dimension &, BiomeSource &, BlockPos const&, BlockPos &);
    EndCityFeature(TheEndGenerator &, unsigned int &);
};
