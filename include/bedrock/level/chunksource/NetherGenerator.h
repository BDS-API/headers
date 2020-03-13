#pragma once

#include <string>
#include "ChunkSource.h"
#include "../generator/WorldGenerator.h"


class NetherGenerator : ChunkSource, WorldGenerator {

public:
    class ThreadData;

    ~NetherGenerator(); // _ZN15NetherGeneratorD2Ev
    virtual void postProcess(ChunkViewSource &); // _ZN15NetherGenerator11postProcessER15ChunkViewSource
    virtual void loadChunk(LevelChunk &, bool); // _ZN15NetherGenerator9loadChunkER10LevelChunkb
    virtual void getFeatureTypeAt(BlockPos const&); // _ZN15NetherGenerator16getFeatureTypeAtERK8BlockPos
    virtual void prepareHeights(BlockVolume &, ChunkPos const&, bool); // _ZN15NetherGenerator14prepareHeightsER11BlockVolumeRK8ChunkPosb
//  virtual void findNearestFeature(StructureFeatureType, BlockPos const&, BlockPos &); //TODO: incomplete function definition // _ZN15NetherGenerator18findNearestFeatureE20StructureFeatureTypeRK8BlockPosRS1_
//  virtual void garbageCollectBlueprints(buffer_span<ChunkPos>); //TODO: incomplete function definition // _ZN15NetherGenerator24garbageCollectBlueprintsE11buffer_spanI8ChunkPosE
    virtual void addHardcodedSpawnAreas(LevelChunk &); // _ZN15NetherGenerator22addHardcodedSpawnAreasER10LevelChunk
    virtual void getBiomeArea(BoundingBox const&, unsigned int)const; // _ZNK15NetherGenerator12getBiomeAreaERK11BoundingBoxj
    virtual void findSpawnPosition()const; // _ZNK15NetherGenerator17findSpawnPositionEv
    NetherGenerator(Dimension &, unsigned int); // _ZN15NetherGeneratorC2ER9Dimensionj
    void getHeights(float *, int, int, int); // _ZN15NetherGenerator10getHeightsEPfiii
    void buildSurfaces(BlockVolume &, LevelChunk &, ChunkPos const&); // _ZN15NetherGenerator13buildSurfacesER11BlockVolumeR10LevelChunkRK8ChunkPos
    void _prepareStructureBlueprints(ChunkPos const&, BiomeSource &); // _ZN15NetherGenerator27_prepareStructureBlueprintsERK8ChunkPosR11BiomeSource
    std::string gatherStats(); // _ZN15NetherGenerator11gatherStatsB5cxx11Ev
    class ThreadData {

    public:
        ThreadData(); // _ZN15NetherGenerator10ThreadDataC2Ev
    };
};
