#pragma once

class MineshaftFeature : StructureFeature {

public:
    virtual ~MineshaftFeature();
    virtual bool isFeatureChunk(BiomeSource const&, Random &, ChunkPos const&, unsigned int);
    virtual void createStructureStart(Dimension &, BiomeSource &, Random &, ChunkPos const&);

    void MineshaftFeature(unsigned int);
};
