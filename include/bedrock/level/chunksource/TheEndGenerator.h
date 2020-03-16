#pragma once

#include <string>
#include "../generator/WorldGenerator.h"
#include "ChunkSource.h"


class TheEndGenerator : public ChunkSource, public WorldGenerator {

public:
    virtual ~TheEndGenerator(); // _ZN15TheEndGeneratorD2Ev
    virtual void __fake_function0(); // fake
    virtual void postProcess(ChunkViewSource &); // _ZN15TheEndGenerator11postProcessER15ChunkViewSource
    virtual void loadChunk(LevelChunk &, bool); // _ZN15TheEndGenerator9loadChunkER10LevelChunkb
    virtual void postProcessMobsAt(BlockSource *, int, int, Random &); // _ZN15TheEndGenerator17postProcessMobsAtEP11BlockSourceiiR6Random
    virtual void getFeatureTypeAt(BlockPos const&); // _ZN15TheEndGenerator16getFeatureTypeAtERK8BlockPos
    virtual void prepareHeights(BlockVolume &, ChunkPos const&, bool); // _ZN15TheEndGenerator14prepareHeightsER11BlockVolumeRK8ChunkPosb
    virtual void findNearestFeature__incomplete0(long, BlockPos const&, BlockPos &); //TODO: incomplete function definition // _ZN15TheEndGenerator18findNearestFeatureE20StructureFeatureTypeRK8BlockPosRS1_
    virtual void garbageCollectBlueprints__incomplete0(long); //TODO: incomplete function definition // _ZN15TheEndGenerator24garbageCollectBlueprintsE11buffer_spanI8ChunkPosE
    virtual void getBiomeArea(BoundingBox const&, unsigned int)const; // _ZNK15TheEndGenerator12getBiomeAreaERK11BoundingBoxj
    virtual void findSpawnPosition()const; // _ZNK15TheEndGenerator17findSpawnPositionEv
    TheEndGenerator(Dimension &, unsigned int); // _ZN15TheEndGeneratorC2ER9Dimensionj
    void _prepareStructureBlueprints(ChunkPos const&, BiomeSource &); // _ZN15TheEndGenerator27_prepareStructureBlueprintsERK8ChunkPosR11BiomeSource
    void buildSurfaces(BlockVolume &, ChunkPos const&, LevelChunk &); // _ZN15TheEndGenerator13buildSurfacesER11BlockVolumeRK8ChunkPosR10LevelChunk
    void getHeights(float *, int, int, int); // _ZN15TheEndGenerator10getHeightsEPfiii
    void getIslandHeightValue(int, int, int, int); // _ZN15TheEndGenerator20getIslandHeightValueEiiii
    bool isIslandChunk(int, int); // _ZN15TheEndGenerator13isIslandChunkEii
    std::string gatherStats(); // _ZN15TheEndGenerator11gatherStatsB5cxx11Ev
};
