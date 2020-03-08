#pragma once

#include "../LevelChunk"
#include "../../block/unmapped/BlockVolume"
#include "../../../unmapped/BiomeSource"
#include "../../util/ChunkPos"
#include "../../../unmapped/BoundingBox"
#include "../../../unmapped/Dimension"
#include "../../util/BlockPos"
#include "../generator/WorldGenerator"


class NetherGenerator : ChunkSource, WorldGenerator {

public:
    NetherGenerator::~NetherGenerator()
    virtual void postProcess(ChunkViewSource &);
    virtual void loadChunk(LevelChunk &, bool);
    virtual void getFeatureTypeAt(BlockPos const&);
    virtual void prepareHeights(BlockVolume &, ChunkPos const&, bool);
    virtual void findNearestFeature(StructureFeatureType, BlockPos const&, BlockPos&);
    virtual void garbageCollectBlueprints(buffer_span<ChunkPos>);
    virtual void addHardcodedSpawnAreas(LevelChunk &);
    virtual void getBiomeArea(BoundingBox const&, unsigned int)const;
    virtual void findSpawnPosition()const;

    NetherGenerator(Dimension &, unsigned int);
    void getHeights(float *, int, int, int);
    void buildSurfaces(BlockVolume &, LevelChunk &, ChunkPos const&);
    void _prepareStructureBlueprints(ChunkPos const&, BiomeSource &);
};
