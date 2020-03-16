#pragma once

#include "StructureFeature.h"


class EndCityFeature : public StructureFeature {

public:
    virtual ~EndCityFeature(); // _ZN14EndCityFeatureD2Ev
    virtual void __fake_function0(); // fake
    virtual void getNearestGeneratedFeature(Dimension &, BiomeSource &, BlockPos const&, BlockPos &); // _ZN14EndCityFeature26getNearestGeneratedFeatureER9DimensionR11BiomeSourceRK8BlockPosRS4_
    virtual bool isFeatureChunk(BiomeSource const&, Random &, ChunkPos const&, unsigned int); // _ZN14EndCityFeature14isFeatureChunkERK11BiomeSourceR6RandomRK8ChunkPosj
    virtual void createStructureStart(Dimension &, BiomeSource &, Random &, ChunkPos const&); // _ZN14EndCityFeature20createStructureStartER9DimensionR11BiomeSourceR6RandomRK8ChunkPos
    EndCityFeature(TheEndGenerator &, unsigned int &); // _ZN14EndCityFeatureC2ER15TheEndGeneratorRj
};
