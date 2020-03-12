#pragma once

#include <string>
#include "ChunkSource.h"
#include "../generator/WorldGenerator.h"


class OverworldGenerator : ChunkSource, WorldGenerator {

public:
    class ThreadData;

    static long SNOW_CUTOFF;
    static long SNOW_SCALE;

//  virtual void findNearestFeature(StructureFeatureType, BlockPos const&, BlockPos &); //TODO: incomplete function definition
    virtual void getFeatureTypeAt(BlockPos const&);
    virtual void loadChunk(LevelChunk &, bool);
    ~OverworldGenerator();
    virtual void debugRender();
    virtual void postProcessMobsAt(BlockSource *, int, int, Random &);
    virtual void addHardcodedSpawnAreas(LevelChunk &);
    virtual void postProcess(ChunkViewSource &);
    virtual void prepareHeights(BlockVolume &, ChunkPos const&, bool);
    virtual void getBiomeArea(BoundingBox const&, unsigned int)const;
    virtual void findSpawnPosition()const;
//  virtual void garbageCollectBlueprints(buffer_span<ChunkPos>); //TODO: incomplete function definition
    void _fixWaterAlongEdges(LevelChunk &, BlockSource &, BlockTickingQueue &);
    void buildSurfaces(OverworldGenerator::ThreadData &, BlockVolume &, LevelChunk &, ChunkPos const&);
    void _makeLayers(LevelData const&, BiomeRegistry const&);
    void _prepareHeights(BlockVolume &, ChunkPos const&, BiomeSource const&, bool);
    std::string gatherStats();
    OverworldGenerator(Dimension &, unsigned int, bool);
    void _prepareStructureBlueprints(ChunkPos const&, BiomeSource &);
    void getHeights(float *, BiomeArea const&, int, int, int);
    class ThreadData {

    public:
        ThreadData();
    };
};
