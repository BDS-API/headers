#pragma once

#include "ChunkSource.h"
#include "../generator/WorldGenerator.h"


class FlatWorldGenerator : ChunkSource, WorldGenerator {

public:
    virtual void loadChunk(LevelChunk &, bool);
    virtual void getBiomeArea(BoundingBox const&, unsigned int)const;
    ~FlatWorldGenerator();
    virtual void prepareHeights(BlockVolume &, ChunkPos const&, bool);
//  virtual void garbageCollectBlueprints(buffer_span<ChunkPos>); //TODO: incomplete function definition
    virtual void findSpawnPosition()const;
    virtual void getFeatureTypeAt(BlockPos const&);
//  virtual void findNearestFeature(StructureFeatureType, BlockPos const&, BlockPos &); //TODO: incomplete function definition
    virtual void postProcess(ChunkViewSource &);
    FlatWorldGenerator(Dimension &, unsigned int, Json::Value const&);
    void _generatePrototypeBlockValues(FlatWorldGeneratorOptions const&);
};
