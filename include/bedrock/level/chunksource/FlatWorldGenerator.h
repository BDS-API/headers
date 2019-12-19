#pragma once

class FlatWorldGenerator : ChunkSource, WorldGenerator {

public:
    virtual FlatWorldGenerator::~FlatWorldGenerator();
    virtual void postProcess(ChunkViewSource &);
    virtual void loadChunk(LevelChunk &, bool);
    virtual void getFeatureTypeAt(BlockPos const&);
    virtual void findNearestFeature(StructureFeatureType, BlockPos const&, BlockPos&);
    virtual void prepareHeights(BlockVolume &, ChunkPos const&, bool);
    virtual void garbageCollectBlueprints(buffer_span<ChunkPos>);
    virtual void getBiomeArea(BoundingBox const&, unsigned int)const;
    virtual void findSpawnPosition(void)const;

    FlatWorldGenerator(Dimension &, unsigned int, Json::Value const&);
    void _generatePrototypeBlockValues(FlatWorldGeneratorOptions const&);
};
