#pragma once

#include "../../../unmapped/FlatWorldGeneratorOptions.h"
#include "./ChunkSource.h"
#include "../../../unmapped/Dimension.h"
#include "../../util/BlockPos.h"
#include "./ChunkViewSource.h"
#include "../../block/unmapped/BlockVolume.h"
#include "../../util/ChunkPos.h"
#include "../../../unmapped/BoundingBox.h"
#include "../../../json/Value.h"
#include "../generator/WorldGenerator.h"
#include "../LevelChunk.h"


class FlatWorldGenerator : ChunkSource, WorldGenerator {

public:
    virtual ~FlatWorldGenerator();
    virtual void postProcess(ChunkViewSource &);
    virtual void loadChunk(LevelChunk &, bool);
    virtual void getFeatureTypeAt(BlockPos const&);
//  virtual void findNearestFeature(StructureFeatureType, BlockPos const&, BlockPos &); //TODO: incomplete function definition
    virtual void prepareHeights(BlockVolume &, ChunkPos const&, bool);
//  virtual void garbageCollectBlueprints(buffer_span<ChunkPos>); //TODO: incomplete function definition
    virtual void getBiomeArea(BoundingBox const&, unsigned int)const;
    virtual void findSpawnPosition()const;

    FlatWorldGenerator(Dimension &, unsigned int, Json::Value const&);
    void _generatePrototypeBlockValues(FlatWorldGeneratorOptions const&);
};
