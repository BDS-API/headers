#pragma once

class FlatWorldGenerator : ChunkSource, WorldGenerator {

    virtual void FlatWorldGenerator::~FlatWorldGenerator();
    virtual void FlatWorldGenerator::~FlatWorldGenerator();
    virtual void shutdown(void);
    virtual void isShutdownDone(void);
    virtual void getExistingChunk(ChunkPos const&);
    virtual void getRandomChunk(Random &);
    virtual void createNewChunk(ChunkPos const&, ChunkSource::LoadMode);
    virtual void getOrLoadChunk(ChunkPos const&, ChunkSource::LoadMode);
    virtual void postProcess(ChunkViewSource &);
    virtual void checkAndReplaceChunk(ChunkViewSource &, LevelChunk &);
    virtual void loadChunk(LevelChunk &, bool);
    virtual void postProcessMobsAt(BlockSource *, int, int, Random &);
    virtual void saveLiveChunk(LevelChunk &);
    virtual void hintDiscardBatchBegin(void);
    virtual void hintDiscardBatchEnd(void);
    virtual void acquireDiscarded(std::unique_ptr<LevelChunk, std::default_delete<LevelChunk>>);
    virtual void compact(void);
    virtual void flushPendingWrites(void);
    virtual void isWithinWorldLimit(ChunkPos const&)const;
    virtual void getChunkMap(void);
    virtual void getStorage(void)const;
    virtual void clearDeletedEntities(void);
    virtual void getFeatureTypeAt(BlockPos const&);
    virtual void findNearestFeature(StructureFeatureType, BlockPos const&, BlockPos&);
    virtual void prepareHeights(BlockVolume &, ChunkPos const&, bool);
    virtual void garbageCollectBlueprints(buffer_span<ChunkPos>);
    virtual void getBiomeArea(BoundingBox const&, unsigned int)const;
    virtual void findSpawnPosition(void)const;
    virtual void ;
    virtual void `non-virtual thunk to'FlatWorldGenerator::~FlatWorldGenerator();
    virtual void `non-virtual thunk to'FlatWorldGenerator::~FlatWorldGenerator();
    virtual void `non-virtual thunk to'FlatWorldGenerator::getFeatureTypeAt(BlockPos const&);
    virtual void `non-virtual thunk to'FlatWorldGenerator::findNearestFeature(StructureFeatureType, BlockPos const&, BlockPos&);
    virtual void `non-virtual thunk to'FlatWorldGenerator::prepareHeights(BlockVolume &, ChunkPos const&, bool);
    virtual void `non-virtual thunk to'FlatWorldGenerator::getBiomeArea(BoundingBox const&, unsigned int)const;
    virtual void `non-virtual thunk to'FlatWorldGenerator::findSpawnPosition(void)const;
    virtual void `non-virtual thunk to'FlatWorldGenerator::garbageCollectBlueprints(buffer_span<ChunkPos>);
    virtual void debugRender(void);
    virtual void addHardcodedSpawnAreas(LevelChunk &);
}
