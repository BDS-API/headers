#pragma once

#include "../../util/Random.h"
#include "../../../unmapped/BiomeSource.h"
#include "./ChunkSource.h"
#include "../../../unmapped/Dimension.h"
#include "../../util/BlockPos.h"
#include "./ChunkViewSource.h"
#include "../../block/unmapped/BlockSource.h"
#include "../../block/unmapped/BlockVolume.h"
#include "../../util/ChunkPos.h"
#include "../../../unmapped/BoundingBox.h"
#include "../generator/WorldGenerator.h"
#include "../LevelChunk.h"
#include <string>


class TheEndGenerator : ChunkSource, WorldGenerator {

public:
    virtual ~TheEndGenerator();
    virtual void postProcess(ChunkViewSource &);
    virtual void loadChunk(LevelChunk &, bool);
    virtual void postProcessMobsAt(BlockSource *, int, int, Random &);
    virtual void getFeatureTypeAt(BlockPos const&);
    virtual void prepareHeights(BlockVolume &, ChunkPos const&, bool);
//  virtual void findNearestFeature(StructureFeatureType, BlockPos const&, BlockPos &); //TODO: incomplete function definition
//  virtual void garbageCollectBlueprints(buffer_span<ChunkPos>); //TODO: incomplete function definition
    virtual void getBiomeArea(BoundingBox const&, unsigned int)const;
    virtual void findSpawnPosition()const;

    TheEndGenerator(Dimension &, unsigned int);
    void _prepareStructureBlueprints(ChunkPos const&, BiomeSource &);
    void buildSurfaces(BlockVolume &, ChunkPos const&, LevelChunk &);
    void getHeights(float *, int, int, int);
    void getIslandHeightValue(int, int, int, int);
    bool isIslandChunk(int, int);
    std::string gatherStats();
};
