#pragma once

#include "../../../unmapped/Dimension"
#include "../../block/unmapped/BlockTickingQueue"
#include "../../../unmapped/ThreadData"
#include "../../util/Random"
#include "../../block/unmapped/BlockSource"
#include "../LevelChunk"
#include "../../util/BlockPos"
#include "../../../unmapped/BiomeRegistry"
#include "../../util/ChunkPos"
#include "../LevelData"
#include "../../block/unmapped/BlockVolume"
#include "../../../unmapped/BiomeArea"
#include "../../../unmapped/BoundingBox"
#include "../generator/WorldGenerator"
#include "../../../unmapped/BiomeSource"


class OverworldGenerator : ChunkSource, WorldGenerator {

public:
    static long SNOW_CUTOFF;
    static long SNOW_SCALE;

    virtual OverworldGenerator::~OverworldGenerator()
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
