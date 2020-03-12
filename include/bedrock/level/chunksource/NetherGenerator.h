#pragma once

#include <string>
#include "ChunkSource.h"
#include "../generator/WorldGenerator.h"


class NetherGenerator : ChunkSource, WorldGenerator {

public:
    class ThreadData;

    virtual void prepareHeights(BlockVolume &, ChunkPos const&, bool);
    virtual void findSpawnPosition()const;
    virtual void getFeatureTypeAt(BlockPos const&);
//  virtual void findNearestFeature(StructureFeatureType, BlockPos const&, BlockPos &); //TODO: incomplete function definition
//  virtual void garbageCollectBlueprints(buffer_span<ChunkPos>); //TODO: incomplete function definition
    virtual void postProcess(ChunkViewSource &);
    ~NetherGenerator();
    virtual void loadChunk(LevelChunk &, bool);
    virtual void addHardcodedSpawnAreas(LevelChunk &);
    virtual void getBiomeArea(BoundingBox const&, unsigned int)const;
    void getHeights(float *, int, int, int);
    NetherGenerator(Dimension &, unsigned int);
    std::string gatherStats();
    void _prepareStructureBlueprints(ChunkPos const&, BiomeSource &);
    void buildSurfaces(BlockVolume &, LevelChunk &, ChunkPos const&);
    class ThreadData {

    public:
        ThreadData();
    };
};
