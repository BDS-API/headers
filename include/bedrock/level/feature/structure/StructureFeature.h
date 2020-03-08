#pragma once

#include "../../../util/Random"
#include "../../../block/unmapped/BlockSource"
#include "../../../../unmapped/Dimension"
#include "../../../../unmapped/BiomeSource"
#include "../../LevelChunk"
#include "../../../util/BlockPos"
#include "../../../../unmapped/BoundingBox"
#include "../../../util/ChunkPos"
#include "../../../../unmapped/HardcodedSpawnAreaRegistry"


class StructureFeature {

public:
    virtual StructureFeature::~StructureFeature()
    virtual void initMobSpawnTypes(HardcodedSpawnAreaRegistry &);
    virtual void postProcess(BlockSource *, Random &, int, int);
    virtual void getNearestGeneratedFeature(Dimension &, BiomeSource &, BlockPos const&, BlockPos&);
    virtual void getStructureAt(int, int, int);
    virtual void getGuesstimatedFeaturePositions();

    void addFeature(Dimension &, Random &, ChunkPos const&, BiomeSource &);
    StructureFeature(unsigned int);
    void createBlueprints(Dimension &, ChunkPos const&, BiomeSource &);
    void foreachIntersectingStructureStart(BoundingBox const&, std::function<void ()(StructureStart &)>);
    void generateHardcodedMobSpawns(LevelChunk &);
    void postProcessMobsAt(BlockSource *, int, int, Random &);
    void debugRender();
    bool isInsideFeature(int, int, int);
    void setRandomSeedFor(Random &, int, int, int, unsigned int);
    bool isInsideBoundingFeature(int, int, int);
    void findNearestFeaturePositionBySpacing(Dimension &, StructureFeature&, BiomeSource &, BlockPos const&, BlockPos&, int, int, int, bool, int, bool);
    void findFarAwayStructures(buffer_span<ChunkPos>, unsigned int);
    void garbageCollectBlueprints(buffer_span<ChunkPos>, unsigned int);
};
