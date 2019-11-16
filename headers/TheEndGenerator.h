#pragma once

class TheEndGenerator : ChunkSource, WorldGenerator {

    virtual void TheEndGenerator::~TheEndGenerator();
    virtual void TheEndGenerator::~TheEndGenerator();
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
    virtual void prepareHeights(BlockVolume &, ChunkPos const&, bool);
    virtual void findNearestFeature(StructureFeatureType, BlockPos const&, BlockPos&);
    virtual void garbageCollectBlueprints(buffer_span<ChunkPos>);
    virtual void getBiomeArea(BoundingBox const&, unsigned int)const;
    virtual void findSpawnPosition(void)const;
    virtual void ;
    virtual void `non-virtual thunk to'TheEndGenerator::~TheEndGenerator();
    virtual void `non-virtual thunk to'TheEndGenerator::~TheEndGenerator();
    virtual void `non-virtual thunk to'TheEndGenerator::getFeatureTypeAt(BlockPos const&);
    virtual void `non-virtual thunk to'TheEndGenerator::findNearestFeature(StructureFeatureType, BlockPos const&, BlockPos&);
    virtual void `non-virtual thunk to'TheEndGenerator::prepareHeights(BlockVolume &, ChunkPos const&, bool);
    virtual void `non-virtual thunk to'TheEndGenerator::getBiomeArea(BoundingBox const&, unsigned int)const;
    virtual void `non-virtual thunk to'TheEndGenerator::findSpawnPosition(void)const;
    virtual void `non-virtual thunk to'TheEndGenerator::garbageCollectBlueprints(buffer_span<ChunkPos>);
    virtual void debugRender(void);
    virtual void addHardcodedSpawnAreas(LevelChunk &);
}
