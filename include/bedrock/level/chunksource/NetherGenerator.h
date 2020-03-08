#pragma once

#include "../../../unmapped/Dimension"
#include "../LevelChunk"
#include "../../util/BlockPos"
#include "../../../unmapped/BoundingBox"
#include "../../util/ChunkPos"
#include "../generator/WorldGenerator"
#include "../../../unmapped/BiomeSource"
#include "../../block/unmapped/BlockVolume"


class NetherGenerator : ChunkSource, WorldGenerator {

public:
    virtual NetherGenerator::~NetherGenerator()
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
