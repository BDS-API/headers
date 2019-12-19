#pragma once

class BuriedTreasureFeature : StructureFeature {

public:
    virtual BuriedTreasureFeature::~BuriedTreasureFeature();
    virtual void getNearestGeneratedFeature(Dimension &, BiomeSource &, BlockPos const&, BlockPos&);
    virtual bool isFeatureChunk(BiomeSource const&, Random &, ChunkPos const&, unsigned int);
    virtual void createStructureStart(Dimension &, BiomeSource &, Random &, ChunkPos const&);

    BuriedTreasureFeature(unsigned int);
};
