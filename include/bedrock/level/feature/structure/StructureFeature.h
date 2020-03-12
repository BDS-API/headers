#pragma once

#include "../../../block/unmapped/BlockSource.h"
#include "../../../util/ChunkPos.h"
#include "../../../../unmapped/BiomeSource.h"
#include "../../../../unmapped/Dimension.h"
#include "../../../../unmapped/HardcodedSpawnAreaRegistry.h"
#include "../../../../unmapped/BoundingBox.h"
#include "../../../util/Random.h"
#include <functional>
#include "../../../util/BlockPos.h"
#include "../../structure/start/StructureStart.h"
#include "../../LevelChunk.h"


class StructureFeature {

public:
    ~StructureFeature();
    virtual void initMobSpawnTypes(HardcodedSpawnAreaRegistry &);
    virtual void getNearestGeneratedFeature(Dimension &, BiomeSource &, BlockPos const&, BlockPos &);
    virtual void postProcess(BlockSource *, Random &, int, int);
    virtual void getGuesstimatedFeaturePositions();
    virtual void getStructureAt(int, int, int);
    void setRandomSeedFor(Random &, int, int, int, unsigned int);
    void foreachIntersectingStructureStart(BoundingBox const&, std::function<void (StructureStart &)>);
    StructureFeature(unsigned int);
    void findNearestFeaturePositionBySpacing(Dimension &, StructureFeature &, BiomeSource &, BlockPos const&, BlockPos &, int, int, int, bool, int, bool);
    void createBlueprints(Dimension &, ChunkPos const&, BiomeSource &);
//  void garbageCollectBlueprints(buffer_span<ChunkPos>, unsigned int); //TODO: incomplete function definition
    bool isInsideBoundingFeature(int, int, int);
    bool isInsideFeature(int, int, int);
    void addFeature(Dimension &, Random &, ChunkPos const&, BiomeSource &);
    void debugRender();
    void generateHardcodedMobSpawns(LevelChunk &);
//  void findFarAwayStructures(buffer_span<ChunkPos>, unsigned int); //TODO: incomplete function definition
    void postProcessMobsAt(BlockSource *, int, int, Random &);
};
