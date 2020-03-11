#pragma once

#include "../../../../unmapped/HardcodedSpawnAreaRegistry.h"
#include "./StructureFeature.h"
#include "../../../../unmapped/Dimension.h"
#include "../../../util/Random.h"
#include "../../../../unmapped/BiomeSource.h"
#include "../../../util/ChunkPos.h"


class NetherFortressFeature : StructureFeature {

public:
    virtual ~NetherFortressFeature();
    virtual void initMobSpawnTypes(HardcodedSpawnAreaRegistry &);
    virtual bool isFeatureChunk(BiomeSource const&, Random &, ChunkPos const&, unsigned int);
    virtual void createStructureStart(Dimension &, BiomeSource &, Random &, ChunkPos const&);

    NetherFortressFeature(unsigned int &);
    void clearCachedBuildings();
};
