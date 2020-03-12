#pragma once

#include "ChunkViewSource.h"
#include "../../../unmapped/BiomeSource.h"
#include "../LevelData.h"
#include "../../util/ChunkPos.h"
#include "../LevelChunk.h"
#include "../../util/Random.h"
#include "../../block/unmapped/BlockSource.h"
#include "ChunkSource.h"
#include "../../util/BlockPos.h"
#include "../../../unmapped/BoundingBox.h"
#include "../../../unmapped/BiomeArea.h"
#include "../../block/unmapped/BlockVolume.h"
#include "../../../unmapped/BiomeRegistry.h"
#include "../../../unmapped/Dimension.h"
#include "../../block/unmapped/BlockTickingQueue.h"
#include "../generator/WorldGenerator.h"


class OverworldGenerator : ChunkSource, WorldGenerator {

public:
    class ThreadData;

    static long SNOW_CUTOFF;
    static long SNOW_SCALE;

    virtual void addHardcodedSpawnAreas(LevelChunk &);
    virtual void postProcess(ChunkViewSource &);
    virtual void postProcessMobsAt(BlockSource *, int, int, Random &);
//  virtual void garbageCollectBlueprints(buffer_span<ChunkPos>); //TODO: incomplete function definition
    ~OverworldGenerator();
    virtual void findSpawnPosition()const;
    virtual void loadChunk(LevelChunk &, bool);
    virtual void getBiomeArea(BoundingBox const&, unsigned int)const;
    virtual void debugRender();
    virtual void getFeatureTypeAt(BlockPos const&);
//  virtual void findNearestFeature(StructureFeatureType, BlockPos const&, BlockPos &); //TODO: incomplete function definition
    virtual void prepareHeights(BlockVolume &, ChunkPos const&, bool);
    void _prepareHeights(BlockVolume &, ChunkPos const&, BiomeSource const&, bool);
    void _fixWaterAlongEdges(LevelChunk &, BlockSource &, BlockTickingQueue &);
    void _prepareStructureBlueprints(ChunkPos const&, BiomeSource &);
    void buildSurfaces(OverworldGenerator::ThreadData &, BlockVolume &, LevelChunk &, ChunkPos const&);
    void getHeights(float *, BiomeArea const&, int, int, int);
    std::string gatherStats();
    void _makeLayers(LevelData const&, BiomeRegistry const&);
    OverworldGenerator(Dimension &, unsigned int, bool);
    class ThreadData {

    public:
        ThreadData();
    };
};
