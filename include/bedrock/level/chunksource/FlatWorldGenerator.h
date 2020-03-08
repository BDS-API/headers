#pragma once

#include "../LevelChunk"
#include "../../block/unmapped/BlockVolume"
#include "../../../json/Value"
#include "../../util/ChunkPos"
#include "../../../unmapped/BoundingBox"
#include "../../../unmapped/FlatWorldGeneratorOptions"
#include "../../../unmapped/Dimension"
#include "../../util/BlockPos"
#include "../generator/WorldGenerator"


class FlatWorldGenerator : ChunkSource, WorldGenerator {

public:
    FlatWorldGenerator::~FlatWorldGenerator()
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
