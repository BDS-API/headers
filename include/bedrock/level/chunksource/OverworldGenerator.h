#pragma once

#include <string>
#include "../generator/WorldGenerator.h"
#include "ChunkSource.h"


class OverworldGenerator : public ChunkSource, public WorldGenerator {

public:
    class ThreadData;

    static long SNOW_CUTOFF;
    static long SNOW_SCALE;

    virtual ~OverworldGenerator(); // _ZN18OverworldGeneratorD2Ev
    virtual void __fake_function0(); // fake
    virtual void postProcess(ChunkViewSource &); // _ZN18OverworldGenerator11postProcessER15ChunkViewSource
    virtual void loadChunk(LevelChunk &, bool); // _ZN18OverworldGenerator9loadChunkER10LevelChunkb
    virtual void postProcessMobsAt(BlockSource *, int, int, Random &); // _ZN18OverworldGenerator17postProcessMobsAtEP11BlockSourceiiR6Random
    virtual void debugRender(); // _ZN18OverworldGenerator11debugRenderEv
    virtual void prepareHeights(BlockVolume &, ChunkPos const&, bool); // _ZN18OverworldGenerator14prepareHeightsER11BlockVolumeRK8ChunkPosb
    virtual void getBiomeArea(BoundingBox const&, unsigned int)const; // _ZNK18OverworldGenerator12getBiomeAreaERK11BoundingBoxj
    virtual void findSpawnPosition()const; // _ZNK18OverworldGenerator17findSpawnPositionEv
    virtual void getFeatureTypeAt(BlockPos const&); // _ZN18OverworldGenerator16getFeatureTypeAtERK8BlockPos
    virtual void findNearestFeature__incomplete0(long, BlockPos const&, BlockPos &); //TODO: incomplete function definition // _ZN18OverworldGenerator18findNearestFeatureE20StructureFeatureTypeRK8BlockPosRS1_
    virtual void garbageCollectBlueprints__incomplete0(long); //TODO: incomplete function definition // _ZN18OverworldGenerator24garbageCollectBlueprintsE11buffer_spanI8ChunkPosE
    virtual void addHardcodedSpawnAreas(LevelChunk &); // _ZN18OverworldGenerator22addHardcodedSpawnAreasER10LevelChunk
    OverworldGenerator(Dimension &, unsigned int, bool); // _ZN18OverworldGeneratorC2ER9Dimensionjb
    void _makeLayers(LevelData const&, BiomeRegistry const&); // _ZN18OverworldGenerator11_makeLayersERK9LevelDataRK13BiomeRegistry
    void _prepareHeights(BlockVolume &, ChunkPos const&, BiomeSource const&, bool); // _ZN18OverworldGenerator15_prepareHeightsER11BlockVolumeRK8ChunkPosRK11BiomeSourceb
    void getHeights(float *, BiomeArea const&, int, int, int); // _ZN18OverworldGenerator10getHeightsEPfRK9BiomeAreaiii
    void buildSurfaces(OverworldGenerator::ThreadData &, BlockVolume &, LevelChunk &, ChunkPos const&); // _ZN18OverworldGenerator13buildSurfacesERNS_10ThreadDataER11BlockVolumeR10LevelChunkRK8ChunkPos
    void _prepareStructureBlueprints(ChunkPos const&, BiomeSource &); // _ZN18OverworldGenerator27_prepareStructureBlueprintsERK8ChunkPosR11BiomeSource
    void _fixWaterAlongEdges(LevelChunk &, BlockSource &, BlockTickingQueue &); // _ZN18OverworldGenerator19_fixWaterAlongEdgesER10LevelChunkR11BlockSourceR17BlockTickingQueue
    std::string gatherStats(); // _ZN18OverworldGenerator11gatherStatsB5cxx11Ev
    class ThreadData {

    public:
        ThreadData(); // _ZN18OverworldGenerator10ThreadDataC2Ev
    };
};
