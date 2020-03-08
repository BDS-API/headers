#pragma once

#include "../../../unmapped/Dimension"
#include "../LevelChunk"
#include "../../util/BlockPos"
#include "../../../unmapped/FlatWorldGeneratorOptions"
#include "../../../unmapped/BoundingBox"
#include "../../util/ChunkPos"
#include "../generator/WorldGenerator"
#include "../../../json/Value"
#include "../../block/unmapped/BlockVolume"


class FlatWorldGenerator : ChunkSource, WorldGenerator {

public:
    virtual FlatWorldGenerator::~FlatWorldGenerator()
    virtual void postProcess(ChunkViewSource &);
    virtual void loadChunk(LevelChunk &, bool);
    virtual void getFeatureTypeAt(BlockPos const&);
    virtual void findNearestFeature(StructureFeatureType, BlockPos const&, BlockPos&);
    virtual void prepareHeights(BlockVolume &, ChunkPos const&, bool);
    virtual void garbageCollectBlueprints(buffer_span<ChunkPos>);
    virtual void getBiomeArea(BoundingBox const&, unsigned int)const;
    virtual void findSpawnPosition()const;

    FlatWorldGenerator(Dimension &, unsigned int, Json::Value const&);
    void _generatePrototypeBlockValues(FlatWorldGeneratorOptions const&);
};
