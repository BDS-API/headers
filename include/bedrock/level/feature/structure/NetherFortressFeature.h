#pragma once

#include "../../../util/Random"
#include "../../../../unmapped/Dimension"
#include "../../../../unmapped/BiomeSource"
#include "../../../util/ChunkPos"
#include "../../../../unmapped/HardcodedSpawnAreaRegistry"


class NetherFortressFeature : StructureFeature {

public:
    virtual NetherFortressFeature::~NetherFortressFeature()
    virtual void initMobSpawnTypes(HardcodedSpawnAreaRegistry &);
    virtual bool isFeatureChunk(BiomeSource const&, Random &, ChunkPos const&, unsigned int);
    virtual void createStructureStart(Dimension &, BiomeSource &, Random &, ChunkPos const&);

    NetherFortressFeature(unsigned int &);
    void clearCachedBuildings();
};
