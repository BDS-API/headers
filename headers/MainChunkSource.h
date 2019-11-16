#pragma once

class MainChunkSource : ChunkSource {

    virtual void Main~MainChunkSource();
    virtual void Main~MainChunkSource();
    virtual void shutdown(void);
    virtual void isShutdownDone(void);
    virtual void MaingetExistingChunk(ChunkPos const&);
    virtual void MaingetRandomChunk(Random &);
    virtual void MaincreateNewChunk(ChunkPos const&, ChunkSource::LoadMode);
    virtual void getOrLoadChunk(ChunkPos const&, ChunkSource::LoadMode);
    virtual void postProcess(ChunkViewSource &);
    virtual void checkAndReplaceChunk(ChunkViewSource &, LevelChunk &);
    virtual void loadChunk(LevelChunk &, bool);
    virtual void postProcessMobsAt(BlockSource *, int, int, Random &);
    virtual void saveLiveChunk(LevelChunk &);
    virtual void hintDiscardBatchBegin(void);
    virtual void hintDiscardBatchEnd(void);
    virtual void MainacquireDiscarded(std::unique_ptr<LevelChunk, std::default_delete<LevelChunk>>);
    virtual void compact(void);
    virtual void flushPendingWrites(void);
    virtual void isWithinWorldLimit(ChunkPos const&)const;
    virtual void MaingetChunkMap(void);
    virtual void MaingetStorage(void)const;
    virtual void MainclearDeletedEntities(void);
}
