#pragma once

#include "../../../util/ChunkPos.h"
#include "../../../../unmapped/BiomeSource.h"
#include "../../../../unmapped/Dimension.h"
#include "../../../util/Random.h"
#include "StructureFeature.h"
#include "../../../../unmapped/HardcodedSpawnAreaRegistry.h"


class NetherFortressFeature : StructureFeature {

public:
    ~NetherFortressFeature();
    virtual void initMobSpawnTypes(HardcodedSpawnAreaRegistry &);
    virtual bool isFeatureChunk(BiomeSource const&, Random &, ChunkPos const&, unsigned int);
    virtual void createStructureStart(Dimension &, BiomeSource &, Random &, ChunkPos const&);
    void clearCachedBuildings();
    NetherFortressFeature(unsigned int &);
};
