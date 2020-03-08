#pragma once

#include "../../../../unmapped/HardcodedSpawnAreaRegistry"
#include "../../../../unmapped/BiomeSource"
#include "../../../util/ChunkPos"
#include "../../../util/Random"
#include "../../../../unmapped/Dimension"


class NetherFortressFeature : StructureFeature {

public:
    NetherFortressFeature::~NetherFortressFeature()
    virtual void initMobSpawnTypes(HardcodedSpawnAreaRegistry &);
    virtual bool isFeatureChunk(BiomeSource const&, Random &, ChunkPos const&, unsigned int);
    virtual void createStructureStart(Dimension &, BiomeSource &, Random &, ChunkPos const&);

    NetherFortressFeature(unsigned int &);
    void clearCachedBuildings();
};
