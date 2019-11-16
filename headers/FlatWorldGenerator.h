#pragma once

class FlatWorldGenerator : ChunkSource, WorldGenerator {

    virtual void Flat~FlatWorldGenerator();
    virtual void Flat~FlatWorldGenerator();
    virtual void shutdown(void);
    virtual void isShutdownDone(void);
    virtual void getExistingChunk(ChunkPos const&);
    virtual void getRandomChunk(Random &);
    virtual void createNewChunk(ChunkPos const&, ChunkSource::LoadMode);
    virtual void getOrLoadChunk(ChunkPos const&, ChunkSource::LoadMode);
    virtual void FlatpostProcess(ChunkViewSource &);
    virtual void checkAndReplaceChunk(ChunkViewSource &, LevelChunk &);
    virtual void FlatloadChunk(LevelChunk &, bool);
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
    virtual void FlatgetFeatureTypeAt(BlockPos const&);
    virtual void FlatfindNearestFeature(StructureFeatureType, BlockPos const&, BlockPos&);
    virtual void FlatprepareHeights(BlockVolume &, ChunkPos const&, bool);
    virtual void FlatgarbageCollectBlueprints(buffer_span<ChunkPos>);
    virtual void FlatgetBiomeArea(BoundingBox const&, unsigned int)const;
    virtual void FlatfindSpawnPosition(void)const;
    virtual void ;
    virtual void `non-virtual thunk to'Flat~FlatWorldGenerator();
    virtual void `non-virtual thunk to'Flat~FlatWorldGenerator();
    virtual void `non-virtual thunk to'FlatgetFeatureTypeAt(BlockPos const&);
    virtual void `non-virtual thunk to'FlatfindNearestFeature(StructureFeatureType, BlockPos const&, BlockPos&);
    virtual void `non-virtual thunk to'FlatprepareHeights(BlockVolume &, ChunkPos const&, bool);
    virtual void `non-virtual thunk to'FlatgetBiomeArea(BoundingBox const&, unsigned int)const;
    virtual void `non-virtual thunk to'FlatfindSpawnPosition(void)const;
    virtual void `non-virtual thunk to'FlatgarbageCollectBlueprints(buffer_span<ChunkPos>);
    virtual void debugRender(void);
    virtual void addHardcodedSpawnAreas(LevelChunk &);
}
