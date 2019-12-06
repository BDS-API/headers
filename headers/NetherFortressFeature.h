#pragma once

class NetherFortressFeature : StructureFeature {

public:
    virtual ~NetherFortressFeature();
    virtual void initMobSpawnTypes(HardcodedSpawnAreaRegistry &);
    virtual bool isFeatureChunk(BiomeSource const&, Random &, ChunkPos const&, unsigned int);
    virtual void createStructureStart(Dimension &, BiomeSource &, Random &, ChunkPos const&);

    void NetherFortressFeature(unsigned int &);
    void clearCachedBuildings(void);
};
