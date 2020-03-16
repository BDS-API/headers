#pragma once

#include "../generator/WorldGenerator.h"
#include "ChunkSource.h"


class FlatWorldGenerator : public ChunkSource, public WorldGenerator {

public:
    virtual ~FlatWorldGenerator(); // _ZN18FlatWorldGeneratorD2Ev
    virtual void __fake_function0(); // fake
    virtual void postProcess(ChunkViewSource &); // _ZN18FlatWorldGenerator11postProcessER15ChunkViewSource
    virtual void loadChunk(LevelChunk &, bool); // _ZN18FlatWorldGenerator9loadChunkER10LevelChunkb
    virtual void getFeatureTypeAt(BlockPos const&); // _ZN18FlatWorldGenerator16getFeatureTypeAtERK8BlockPos
    virtual void findNearestFeature__incomplete0(long, BlockPos const&, BlockPos &); //TODO: incomplete function definition // _ZN18FlatWorldGenerator18findNearestFeatureE20StructureFeatureTypeRK8BlockPosRS1_
    virtual void prepareHeights(BlockVolume &, ChunkPos const&, bool); // _ZN18FlatWorldGenerator14prepareHeightsER11BlockVolumeRK8ChunkPosb
    virtual void garbageCollectBlueprints__incomplete0(long); //TODO: incomplete function definition // _ZN18FlatWorldGenerator24garbageCollectBlueprintsE11buffer_spanI8ChunkPosE
    virtual void getBiomeArea(BoundingBox const&, unsigned int)const; // _ZNK18FlatWorldGenerator12getBiomeAreaERK11BoundingBoxj
    virtual void findSpawnPosition()const; // _ZNK18FlatWorldGenerator17findSpawnPositionEv
    FlatWorldGenerator(Dimension &, unsigned int, Json::Value const&); // _ZN18FlatWorldGeneratorC2ER9DimensionjRKN4Json5ValueE
    void _generatePrototypeBlockValues(FlatWorldGeneratorOptions const&); // _ZN18FlatWorldGenerator29_generatePrototypeBlockValuesERK25FlatWorldGeneratorOptions
};
