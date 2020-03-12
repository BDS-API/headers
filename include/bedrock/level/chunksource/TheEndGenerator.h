#pragma once

#include "ChunkViewSource.h"
#include "../../../unmapped/BiomeSource.h"
#include "../../util/ChunkPos.h"
#include "../LevelChunk.h"
#include "../../util/Random.h"
#include "../../block/unmapped/BlockSource.h"
#include "ChunkSource.h"
#include "../../util/BlockPos.h"
#include "../../../unmapped/BoundingBox.h"
#include "../../block/unmapped/BlockVolume.h"
#include "../../../unmapped/Dimension.h"
#include "../generator/WorldGenerator.h"


class TheEndGenerator : ChunkSource, WorldGenerator {

public:
//  virtual void findNearestFeature(StructureFeatureType, BlockPos const&, BlockPos &); //TODO: incomplete function definition
    virtual void postProcessMobsAt(BlockSource *, int, int, Random &);
    virtual void loadChunk(LevelChunk &, bool);
//  virtual void garbageCollectBlueprints(buffer_span<ChunkPos>); //TODO: incomplete function definition
    ~TheEndGenerator();
    virtual void getBiomeArea(BoundingBox const&, unsigned int)const;
    virtual void findSpawnPosition()const;
    virtual void postProcess(ChunkViewSource &);
    virtual void prepareHeights(BlockVolume &, ChunkPos const&, bool);
    virtual void getFeatureTypeAt(BlockPos const&);
    void getHeights(float *, int, int, int);
    TheEndGenerator(Dimension &, unsigned int);
    void _prepareStructureBlueprints(ChunkPos const&, BiomeSource &);
    void buildSurfaces(BlockVolume &, ChunkPos const&, LevelChunk &);
    void getIslandHeightValue(int, int, int, int);
    std::string gatherStats();
    bool isIslandChunk(int, int);
};
