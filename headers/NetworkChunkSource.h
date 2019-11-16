#pragma once

class NetworkChunkSource : ChunkSource {

    virtual void Network~NetworkChunkSource();
    virtual void Network~NetworkChunkSource();
    virtual void shutdown(void);
    virtual void isShutdownDone(void);
    virtual void NetworkgetExistingChunk(ChunkPos const&);
    virtual void getRandomChunk(Random &);
    virtual void NetworkcreateNewChunk(ChunkPos const&, ChunkSource::LoadMode);
    virtual void NetworkgetOrLoadChunk(ChunkPos const&, ChunkSource::LoadMode);
    virtual void postProcess(ChunkViewSource &);
    virtual void checkAndReplaceChunk(ChunkViewSource &, LevelChunk &);
    virtual void loadChunk(LevelChunk &, bool);
    virtual void postProcessMobsAt(BlockSource *, int, int, Random &);
    virtual void saveLiveChunk(LevelChunk &);
    virtual void hintDiscardBatchBegin(void);
    virtual void hintDiscardBatchEnd(void);
    virtual void NetworkacquireDiscarded(std::unique_ptr<LevelChunk, std::default_delete<LevelChunk>>);
    virtual void compact(void);
    virtual void flushPendingWrites(void);
    virtual void isWithinWorldLimit(ChunkPos const&)const;
    virtual void getChunkMap(void);
    virtual void NetworkgetStorage(void)const;
    virtual void clearDeletedEntities(void);
}
