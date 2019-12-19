#pragma once

class DBChunkStorage : ChunkSource {

public:
    static long threadBatch;
    static long threadBuffer[abi:cxx11];

    virtual ~DBChunkStorage();
    virtual void shutdown(void);
    virtual bool isShutdownDone(void);
    virtual void postProcess(ChunkViewSource &);
    virtual void checkAndReplaceChunk(ChunkViewSource &, LevelChunk &);
    virtual void loadChunk(LevelChunk &, bool);
    virtual void saveLiveChunk(LevelChunk &);
    virtual void hintDiscardBatchBegin(void);
    virtual void hintDiscardBatchEnd(void);
    virtual void acquireDiscarded(std::unique_ptr<LevelChunk, std::default_delete<LevelChunk>>);
    virtual void flushPendingWrites(void);

    void DBChunkStorage(std::unique_ptr<ChunkSource, std::default_delete<ChunkSource>>, DBStorage &, Scheduler &);
    void _writeBatch(void);
    void _hasChunkUncached(DBChunkStorageKey const&);
    void _hasChunk(DBChunkStorageKey const&);
    void _loadChunkFromDB(LevelChunk &);
    void _applyChunkFixup(LevelChunk *, BlockSource &);
    void _upgradeFix(LevelChunk &, BlockSource &);
    void _loadAndBlendFromDB(LevelChunk &);
    void _serializeChunk(LevelChunk const&, DBStorageWriteBatch &);
    void _getBuffer(void);
    void freeCaches(void);
    void registerUpgradeFixHandler(std::function<void ()(LevelChunk &, BlockSource &)>);
};
