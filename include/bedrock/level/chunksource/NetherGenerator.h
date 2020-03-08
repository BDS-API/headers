#pragma once

#include "../../../unmapped/BoundingBox"
#include "../../../unmapped/BlockPos"
#include "../../../unmapped/BlockVolume"
#include "../../../unmapped/ChunkPos"
#include "../LevelChunk"
#include "../../../unmapped/Dimension"
#include "../generator/WorldGenerator"


class NetherGenerator : ChunkSource, WorldGenerator {

public:
    virtual NetherGenerator::~NetherGenerator();
    virtual void postProcess(ChunkViewSource &);
    virtual void loadChunk(LevelChunk &, bool);
    virtual void getFeatureTypeAt(BlockPos const&);
    virtual void prepareHeights(BlockVolume &, ChunkPos const&, bool);
    virtual void findNearestFeature(StructureFeatureType, BlockPos const&, BlockPos&);
    virtual void garbageCollectBlueprints(buffer_span<ChunkPos>);
    virtual void addHardcodedSpawnAreas(LevelChunk &);
    virtual void getBiomeArea(BoundingBox const&, unsigned int)const;
    virtual void findSpawnPosition(void)const;

    NetherGenerator(Dimension &, unsigned int);
    void getHeights(float *, int, int, int);
    void buildSurfaces(BlockVolume &, LevelChunk &, ChunkPos const&);
    void _prepareStructureBlueprints(ChunkPos const&, BiomeSource &);
};
