#pragma once

#include "StructureFeature.h"


class NetherFortressFeature : StructureFeature {

public:
    virtual void initMobSpawnTypes(HardcodedSpawnAreaRegistry &);
    ~NetherFortressFeature();
    virtual void createStructureStart(Dimension &, BiomeSource &, Random &, ChunkPos const&);
    virtual bool isFeatureChunk(BiomeSource const&, Random &, ChunkPos const&, unsigned int);
    NetherFortressFeature(unsigned int &);
    void clearCachedBuildings();
};
