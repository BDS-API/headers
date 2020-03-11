#pragma once

#include "../../util/Random.h"
#include "../../../unmapped/BiomeSource.h"
#include "../../block/unmapped/BlockTickingQueue.h"
#include "../../../unmapped/BiomeRegistry.h"
#include "../LevelData.h"
#include "../../../unmapped/Dimension.h"
#include "./ChunkSource.h"
#include "../../../unmapped/BiomeArea.h"
#include "./ChunkViewSource.h"
#include "../../block/unmapped/BlockSource.h"
#include "../../block/unmapped/BlockVolume.h"
#include "../../util/BlockPos.h"
#include "../../../unmapped/BoundingBox.h"
#include "../generator/WorldGenerator.h"
#include "../../util/ChunkPos.h"
#include "../LevelChunk.h"
#include "../../../unmapped/ThreadData.h"
#include <string>


class OverworldGenerator : ChunkSource, WorldGenerator {

public:
    static long SNOW_CUTOFF;
    static long SNOW_SCALE;

    virtual ~OverworldGenerator();
    virtual void postProcess(ChunkViewSource &);
    virtual void loadChunk(LevelChunk &, bool);
    virtual void postProcessMobsAt(BlockSource *, int, int, Random &);
    virtual void debugRender();
    virtual void prepareHeights(BlockVolume &, ChunkPos const&, bool);
    virtual void getBiomeArea(BoundingBox const&, unsigned int)const;
    virtual void findSpawnPosition()const;
    virtual void getFeatureTypeAt(BlockPos const&);
//  virtual void findNearestFeature(StructureFeatureType, BlockPos const&, BlockPos &); //TODO: incomplete function definition
//  virtual void garbageCollectBlueprints(buffer_span<ChunkPos>); //TODO: incomplete function definition
    virtual void addHardcodedSpawnAreas(LevelChunk &);

    OverworldGenerator(Dimension &, unsigned int, bool);
    void _makeLayers(LevelData const&, BiomeRegistry const&);
    void _prepareHeights(BlockVolume &, ChunkPos const&, BiomeSource const&, bool);
    void getHeights(float *, BiomeArea const&, int, int, int);
    void buildSurfaces(OverworldGenerator::ThreadData &, BlockVolume &, LevelChunk &, ChunkPos const&);
    void _prepareStructureBlueprints(ChunkPos const&, BiomeSource &);
    void _fixWaterAlongEdges(LevelChunk &, BlockSource &, BlockTickingQueue &);
    std::string gatherStats();
};
