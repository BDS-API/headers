#pragma once

#include "StructureFeature.h"


class NetherFortressFeature : StructureFeature {

public:
    ~NetherFortressFeature(); // _ZN21NetherFortressFeatureD2Ev
    virtual void initMobSpawnTypes(HardcodedSpawnAreaRegistry &); // _ZN21NetherFortressFeature17initMobSpawnTypesER26HardcodedSpawnAreaRegistry
    virtual bool isFeatureChunk(BiomeSource const&, Random &, ChunkPos const&, unsigned int); // _ZN21NetherFortressFeature14isFeatureChunkERK11BiomeSourceR6RandomRK8ChunkPosj
    virtual void createStructureStart(Dimension &, BiomeSource &, Random &, ChunkPos const&); // _ZN21NetherFortressFeature20createStructureStartER9DimensionR11BiomeSourceR6RandomRK8ChunkPos
    NetherFortressFeature(unsigned int &); // _ZN21NetherFortressFeatureC2ERj
    void clearCachedBuildings(); // _ZN21NetherFortressFeature20clearCachedBuildingsEv
};
