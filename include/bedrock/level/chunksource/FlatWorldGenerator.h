#pragma once

#include "ChunkViewSource.h"
#include "../../../json/Value.h"
#include "../../util/ChunkPos.h"
#include "../LevelChunk.h"
#include "ChunkSource.h"
#include "../../util/BlockPos.h"
#include "../../../unmapped/FlatWorldGeneratorOptions.h"
#include "../../../unmapped/BoundingBox.h"
#include "../../block/unmapped/BlockVolume.h"
#include "../../../unmapped/Dimension.h"
#include "../generator/WorldGenerator.h"


class FlatWorldGenerator : ChunkSource, WorldGenerator {

public:
    virtual void getFeatureTypeAt(BlockPos const&);
    virtual void postProcess(ChunkViewSource &);
    virtual void findSpawnPosition()const;
    virtual void loadChunk(LevelChunk &, bool);
//  virtual void garbageCollectBlueprints(buffer_span<ChunkPos>); //TODO: incomplete function definition
    virtual void prepareHeights(BlockVolume &, ChunkPos const&, bool);
    ~FlatWorldGenerator();
    virtual void getBiomeArea(BoundingBox const&, unsigned int)const;
//  virtual void findNearestFeature(StructureFeatureType, BlockPos const&, BlockPos &); //TODO: incomplete function definition
    void _generatePrototypeBlockValues(FlatWorldGeneratorOptions const&);
    FlatWorldGenerator(Dimension &, unsigned int, Json::Value const&);
};
