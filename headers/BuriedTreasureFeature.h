#pragma once

class BuriedTreasureFeature : StructureFeature {

    virtual void BuriedTreasureFeature::~BuriedTreasureFeature();
    virtual void BuriedTreasureFeature::~BuriedTreasureFeature();
    virtual void initMobSpawnTypes(HardcodedSpawnAreaRegistry &);
    virtual void postProcess(BlockSource *, Random &, int, int);
    virtual void getNearestGeneratedFeature(Dimension &, BiomeSource &, BlockPos const&, BlockPos&);
    virtual void isFeatureChunk(BiomeSource const&, Random &, ChunkPos const&, unsigned int);
    virtual void createStructureStart(Dimension &, BiomeSource &, Random &, ChunkPos const&);
    virtual void getStructureAt(int, int, int);
    virtual void getGuesstimatedFeaturePositions(void);
}
