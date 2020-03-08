#pragma once

#include "../../block/unmapped/BlockVolume"
#include "../../block/unmapped/BlockSource"
#include "../../../unmapped/BiomeSource"
#include "../../util/ChunkPos"
#include "../../../unmapped/Dimension"
#include "../../util/BlockPos"
#include "../generator/WorldGenerator"
#include "../../util/Random"
#include "../../../unmapped/BoundingBox"
#include "../LevelChunk"


class TheEndGenerator : ChunkSource, WorldGenerator {

public:
    TheEndGenerator::~TheEndGenerator()
    virtual void postProcess(ChunkViewSource &);
    virtual void loadChunk(LevelChunk &, bool);
    virtual void postProcessMobsAt(BlockSource *, int, int, Random &);
    virtual void getFeatureTypeAt(BlockPos const&);
    virtual void prepareHeights(BlockVolume &, ChunkPos const&, bool);
    virtual void findNearestFeature(StructureFeatureType, BlockPos const&, BlockPos&);
    virtual void garbageCollectBlueprints(buffer_span<ChunkPos>);
    virtual void getBiomeArea(BoundingBox const&, unsigned int)const;
    virtual void findSpawnPosition()const;

    TheEndGenerator(Dimension &, unsigned int);
    void _prepareStructureBlueprints(ChunkPos const&, BiomeSource &);
    void buildSurfaces(BlockVolume &, ChunkPos const&, LevelChunk &);
    void getHeights(float *, int, int, int);
    void getIslandHeightValue(int, int, int, int);
    bool isIslandChunk(int, int);
};
