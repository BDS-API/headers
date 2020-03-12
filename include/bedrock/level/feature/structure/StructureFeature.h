#pragma once

#include <functional>


class StructureFeature {

public:
    virtual void initMobSpawnTypes(HardcodedSpawnAreaRegistry &);
    ~StructureFeature();
    virtual void postProcess(BlockSource *, Random &, int, int);
    virtual void getStructureAt(int, int, int);
    virtual void getNearestGeneratedFeature(Dimension &, BiomeSource &, BlockPos const&, BlockPos &);
    virtual void getGuesstimatedFeaturePositions();
    void foreachIntersectingStructureStart(BoundingBox const&, std::function<void (StructureStart &)>);
    void debugRender();
    bool isInsideFeature(int, int, int);
    StructureFeature(unsigned int);
    void generateHardcodedMobSpawns(LevelChunk &);
//  void findFarAwayStructures(buffer_span<ChunkPos>, unsigned int); //TODO: incomplete function definition
    void setRandomSeedFor(Random &, int, int, int, unsigned int);
//  void garbageCollectBlueprints(buffer_span<ChunkPos>, unsigned int); //TODO: incomplete function definition
    bool isInsideBoundingFeature(int, int, int);
    void findNearestFeaturePositionBySpacing(Dimension &, StructureFeature &, BiomeSource &, BlockPos const&, BlockPos &, int, int, int, bool, int, bool);
    void addFeature(Dimension &, Random &, ChunkPos const&, BiomeSource &);
    void createBlueprints(Dimension &, ChunkPos const&, BiomeSource &);
    void postProcessMobsAt(BlockSource *, int, int, Random &);
};
