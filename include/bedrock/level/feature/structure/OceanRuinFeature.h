#pragma once

#include "StructureFeature.h"


class OceanRuinFeature : StructureFeature {

public:
    virtual bool isFeatureChunk(BiomeSource const&, Random &, ChunkPos const&, unsigned int);
    virtual void getNearestGeneratedFeature(Dimension &, BiomeSource &, BlockPos const&, BlockPos &);
    virtual void createStructureStart(Dimension &, BiomeSource &, Random &, ChunkPos const&);
    ~OceanRuinFeature();
    OceanRuinFeature(OverworldGenerator &, OceanMonumentFeature &, unsigned int);
};
