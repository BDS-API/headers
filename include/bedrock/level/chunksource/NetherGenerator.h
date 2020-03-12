#pragma once

#include "ChunkViewSource.h"
#include "../../../unmapped/BiomeSource.h"
#include "../../util/ChunkPos.h"
#include "../LevelChunk.h"
#include "ChunkSource.h"
#include "../../util/BlockPos.h"
#include "../../../unmapped/BoundingBox.h"
#include "../../block/unmapped/BlockVolume.h"
#include "../../../unmapped/Dimension.h"
#include "../generator/WorldGenerator.h"


class NetherGenerator : ChunkSource, WorldGenerator {

public:
    class ThreadData;

    virtual void loadChunk(LevelChunk &, bool);
    virtual void postProcess(ChunkViewSource &);
    virtual void getBiomeArea(BoundingBox const&, unsigned int)const;
    ~NetherGenerator();
//  virtual void findNearestFeature(StructureFeatureType, BlockPos const&, BlockPos &); //TODO: incomplete function definition
    virtual void addHardcodedSpawnAreas(LevelChunk &);
    virtual void prepareHeights(BlockVolume &, ChunkPos const&, bool);
    virtual void getFeatureTypeAt(BlockPos const&);
    virtual void findSpawnPosition()const;
//  virtual void garbageCollectBlueprints(buffer_span<ChunkPos>); //TODO: incomplete function definition
    NetherGenerator(Dimension &, unsigned int);
    std::string gatherStats();
    void buildSurfaces(BlockVolume &, LevelChunk &, ChunkPos const&);
    void _prepareStructureBlueprints(ChunkPos const&, BiomeSource &);
    void getHeights(float *, int, int, int);
    class ThreadData {

    public:
        ThreadData();
    };
};
