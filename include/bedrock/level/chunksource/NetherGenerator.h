#pragma once

#include "../../../unmapped/BiomeSource.h"
#include "./ChunkSource.h"
#include "../../../unmapped/Dimension.h"
#include "../../util/BlockPos.h"
#include "./ChunkViewSource.h"
#include "../../block/unmapped/BlockVolume.h"
#include "../../util/ChunkPos.h"
#include "../../../unmapped/BoundingBox.h"
#include "../generator/WorldGenerator.h"
#include "../LevelChunk.h"
#include <string>


class NetherGenerator : ChunkSource, WorldGenerator {

public:
    virtual ~NetherGenerator();
    virtual void postProcess(ChunkViewSource &);
    virtual void loadChunk(LevelChunk &, bool);
    virtual void getFeatureTypeAt(BlockPos const&);
    virtual void prepareHeights(BlockVolume &, ChunkPos const&, bool);
//  virtual void findNearestFeature(StructureFeatureType, BlockPos const&, BlockPos &); //TODO: incomplete function definition
//  virtual void garbageCollectBlueprints(buffer_span<ChunkPos>); //TODO: incomplete function definition
    virtual void addHardcodedSpawnAreas(LevelChunk &);
    virtual void getBiomeArea(BoundingBox const&, unsigned int)const;
    virtual void findSpawnPosition()const;

    NetherGenerator(Dimension &, unsigned int);
    void getHeights(float *, int, int, int);
    void buildSurfaces(BlockVolume &, LevelChunk &, ChunkPos const&);
    void _prepareStructureBlueprints(ChunkPos const&, BiomeSource &);
    std::string gatherStats();
};
