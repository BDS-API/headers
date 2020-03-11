#pragma once

#include "../../../../unmapped/HardcodedSpawnAreaRegistry.h"
#include "../../LevelChunk.h"
#include "./StructureFeature.h"
#include "../../../util/BlockPos.h"
#include "../../../../unmapped/Dimension.h"
#include "../../../util/Random.h"
#include "../../../block/unmapped/BlockSource.h"
#include "../../../../unmapped/BoundingBox.h"
#include <functional>
#include "../../structure/start/StructureStart.h"
#include "../../../../unmapped/BiomeSource.h"
#include "../../../util/ChunkPos.h"


class StructureFeature {

public:
    virtual ~StructureFeature();
    virtual void initMobSpawnTypes(HardcodedSpawnAreaRegistry &);
    virtual void postProcess(BlockSource *, Random &, int, int);
    virtual void getNearestGeneratedFeature(Dimension &, BiomeSource &, BlockPos const&, BlockPos &);
    virtual void getStructureAt(int, int, int);
    virtual void getGuesstimatedFeaturePositions();

    void addFeature(Dimension &, Random &, ChunkPos const&, BiomeSource &);
    StructureFeature(unsigned int);
    void createBlueprints(Dimension &, ChunkPos const&, BiomeSource &);
//  void foreachIntersectingStructureStart(BoundingBox const&, std::function<void (StructureStart &)>); //TODO: incomplete function definition
    void generateHardcodedMobSpawns(LevelChunk &);
    void postProcessMobsAt(BlockSource *, int, int, Random &);
    void debugRender();
    bool isInsideFeature(int, int, int);
    void setRandomSeedFor(Random &, int, int, int, unsigned int);
    bool isInsideBoundingFeature(int, int, int);
    void findNearestFeaturePositionBySpacing(Dimension &, StructureFeature &, BiomeSource &, BlockPos const&, BlockPos &, int, int, int, bool, int, bool);
//  void findFarAwayStructures(buffer_span<ChunkPos>, unsigned int); //TODO: incomplete function definition
//  void garbageCollectBlueprints(buffer_span<ChunkPos>, unsigned int); //TODO: incomplete function definition
};
