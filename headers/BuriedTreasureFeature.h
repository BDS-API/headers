#pragma once

class BuriedTreasureFeature : StructureFeature {

public:
    virtual ~BuriedTreasureFeature();
    virtual void getNearestGeneratedFeature(Dimension &, BiomeSource &, BlockPos const&, BlockPos&);
    virtual bool isFeatureChunk(BiomeSource const&, Random &, ChunkPos const&, unsigned int);
    virtual void createStructureStart(Dimension &, BiomeSource &, Random &, ChunkPos const&);

    void BuriedTreasureFeature(unsigned int);
};
