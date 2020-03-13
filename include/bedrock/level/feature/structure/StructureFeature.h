#pragma once

#include <functional>


class StructureFeature {

public:
    ~StructureFeature(); // _ZN16StructureFeatureD2Ev
    virtual void initMobSpawnTypes(HardcodedSpawnAreaRegistry &); // _ZN16StructureFeature17initMobSpawnTypesER26HardcodedSpawnAreaRegistry
    virtual void postProcess(BlockSource *, Random &, int, int); // _ZN16StructureFeature11postProcessEP11BlockSourceR6Randomii
    virtual void getNearestGeneratedFeature(Dimension &, BiomeSource &, BlockPos const&, BlockPos &); // _ZN16StructureFeature26getNearestGeneratedFeatureER9DimensionR11BiomeSourceRK8BlockPosRS4_
    virtual void getStructureAt(int, int, int); // _ZN16StructureFeature14getStructureAtEiii
    virtual void getGuesstimatedFeaturePositions(); // _ZN16StructureFeature31getGuesstimatedFeaturePositionsEv
    void addFeature(Dimension &, Random &, ChunkPos const&, BiomeSource &); // _ZN16StructureFeature10addFeatureER9DimensionR6RandomRK8ChunkPosR11BiomeSource
    StructureFeature(unsigned int); // _ZN16StructureFeatureC2Ej
    void createBlueprints(Dimension &, ChunkPos const&, BiomeSource &); // _ZN16StructureFeature16createBlueprintsER9DimensionRK8ChunkPosR11BiomeSource
    void foreachIntersectingStructureStart(BoundingBox const&, std::function<void (StructureStart &)>); // _ZN16StructureFeature33foreachIntersectingStructureStartERK11BoundingBoxSt8functionIFvR14StructureStartEE
    void generateHardcodedMobSpawns(LevelChunk &); // _ZN16StructureFeature26generateHardcodedMobSpawnsER10LevelChunk
    void postProcessMobsAt(BlockSource *, int, int, Random &); // _ZN16StructureFeature17postProcessMobsAtEP11BlockSourceiiR6Random
    void debugRender(); // _ZN16StructureFeature11debugRenderEv
    bool isInsideFeature(int, int, int); // _ZN16StructureFeature15isInsideFeatureEiii
    void setRandomSeedFor(Random &, int, int, int, unsigned int); // _ZN16StructureFeature16setRandomSeedForER6Randomiiij
    bool isInsideBoundingFeature(int, int, int); // _ZN16StructureFeature23isInsideBoundingFeatureEiii
    void findNearestFeaturePositionBySpacing(Dimension &, StructureFeature &, BiomeSource &, BlockPos const&, BlockPos &, int, int, int, bool, int, bool); // _ZN16StructureFeature35findNearestFeaturePositionBySpacingER9DimensionRS_R11BiomeSourceRK8BlockPosRS5_iiibib
//  void findFarAwayStructures(buffer_span<ChunkPos>, unsigned int); //TODO: incomplete function definition // _ZN16StructureFeature21findFarAwayStructuresE11buffer_spanI8ChunkPosEj
//  void garbageCollectBlueprints(buffer_span<ChunkPos>, unsigned int); //TODO: incomplete function definition // _ZN16StructureFeature24garbageCollectBlueprintsE11buffer_spanI8ChunkPosEj
};
