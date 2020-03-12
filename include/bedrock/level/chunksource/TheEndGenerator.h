#pragma once

#include <string>
#include "ChunkSource.h"
#include "../generator/WorldGenerator.h"


class TheEndGenerator : ChunkSource, WorldGenerator {

public:
    ~TheEndGenerator();
    virtual void postProcessMobsAt(BlockSource *, int, int, Random &);
    virtual void getBiomeArea(BoundingBox const&, unsigned int)const;
    virtual void prepareHeights(BlockVolume &, ChunkPos const&, bool);
//  virtual void garbageCollectBlueprints(buffer_span<ChunkPos>); //TODO: incomplete function definition
    virtual void findSpawnPosition()const;
    virtual void postProcess(ChunkViewSource &);
    virtual void getFeatureTypeAt(BlockPos const&);
//  virtual void findNearestFeature(StructureFeatureType, BlockPos const&, BlockPos &); //TODO: incomplete function definition
    virtual void loadChunk(LevelChunk &, bool);
    void getHeights(float *, int, int, int);
    std::string gatherStats();
    void buildSurfaces(BlockVolume &, ChunkPos const&, LevelChunk &);
    void getIslandHeightValue(int, int, int, int);
    bool isIslandChunk(int, int);
    TheEndGenerator(Dimension &, unsigned int);
    void _prepareStructureBlueprints(ChunkPos const&, BiomeSource &);
};
