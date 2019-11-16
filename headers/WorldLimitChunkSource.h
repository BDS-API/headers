#pragma once

class WorldLimitChunkSource : ChunkSource {

    virtual void WorldLimit~WorldLimitChunkSource();
    virtual void WorldLimit~WorldLimitChunkSource();
    virtual void WorldLimitshutdown(void);
    virtual void isShutdownDone(void);
    virtual void WorldLimitgetExistingChunk(ChunkPos const&);
    virtual void getRandomChunk(Random &);
    virtual void WorldLimitcreateNewChunk(ChunkPos const&, ChunkSource::LoadMode);
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
    virtual void WorldLimitisWithinWorldLimit(ChunkPos const&)const;
    virtual void getChunkMap(void);
    virtual void getStorage(void)const;
    virtual void clearDeletedEntities(void);
}
