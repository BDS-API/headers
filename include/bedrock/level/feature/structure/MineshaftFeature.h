#pragma once

#include "StructureFeature.h"


class MineshaftFeature : public StructureFeature {

public:
    virtual ~MineshaftFeature(); // _ZN16MineshaftFeatureD2Ev
    virtual void __fake_function0(); // fake
    virtual bool isFeatureChunk(BiomeSource const&, Random &, ChunkPos const&, unsigned int); // _ZN16MineshaftFeature14isFeatureChunkERK11BiomeSourceR6RandomRK8ChunkPosj
    virtual void createStructureStart(Dimension &, BiomeSource &, Random &, ChunkPos const&); // _ZN16MineshaftFeature20createStructureStartER9DimensionR11BiomeSourceR6RandomRK8ChunkPos
    MineshaftFeature(unsigned int); // _ZN16MineshaftFeatureC2Ej
};
