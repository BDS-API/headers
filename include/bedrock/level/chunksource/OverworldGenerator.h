#pragma once

#include "../../block/unmapped/BlockVolume"
#include "../../block/unmapped/BlockSource"
#include "../../../unmapped/BiomeSource"
#include "../../util/ChunkPos"
#include "../../../unmapped/Dimension"
#include "../../util/BlockPos"
#include "../generator/WorldGenerator"
#include "../../../unmapped/ThreadData"
#include "../../util/Random"
#include "../../block/unmapped/BlockTickingQueue"
#include "../LevelData"
#include "../../../unmapped/BiomeArea"
#include "../../../unmapped/BiomeRegistry"
#include "../../../unmapped/BoundingBox"
#include "../LevelChunk"


class OverworldGenerator : ChunkSource, WorldGenerator {

public:
    static long SNOW_CUTOFF;
    static long SNOW_SCALE;

    OverworldGenerator::~OverworldGenerator()
    virtual void postProcess(ChunkViewSource &);
    virtual void loadChunk(LevelChunk &, bool);
    virtual void postProcessMobsAt(BlockSource *, int, int, Random &);
    virtual void debugRender();
    virtual void prepareHeights(BlockVolume &, ChunkPos const&, bool);
    virtual void getBiomeArea(BoundingBox const&, unsigned int)const;
    virtual void findSpawnPosition()const;
    virtual void getFeatureTypeAt(BlockPos const&);
    virtual void findNearestFeature(StructureFeatureType, BlockPos const&, BlockPos&);
    virtual void garbageCollectBlueprints(buffer_span<ChunkPos>);
    virtual void addHardcodedSpawnAreas(LevelChunk &);

    OverworldGenerator(Dimension &, unsigned int, bool);
    void _makeLayers(LevelData const&, BiomeRegistry const&);
    void _prepareHeights(BlockVolume &, ChunkPos const&, BiomeSource const&, bool);
    void getHeights(float *, BiomeArea const&, int, int, int);
    void buildSurfaces(OverworldGenerator::ThreadData &, BlockVolume &, LevelChunk &, ChunkPos const&);
    void _prepareStructureBlueprints(ChunkPos const&, BiomeSource &);
    void _fixWaterAlongEdges(LevelChunk &, BlockSource &, BlockTickingQueue &);
};
