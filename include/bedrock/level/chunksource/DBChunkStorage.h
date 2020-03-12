#pragma once

#include <memory>
#include "ChunkSource.h"
#include <functional>


class DBChunkStorage : ChunkSource {

public:
    static long threadBatch;
    static std::string threadBuffer;

    virtual void hintDiscardBatchBegin();
    virtual void saveLiveChunk(LevelChunk &);
    virtual void hintDiscardBatchEnd();
    virtual void postProcess(ChunkViewSource &);
    ~DBChunkStorage();
    virtual void acquireDiscarded(std::unique_ptr<LevelChunk>);
    virtual void checkAndReplaceChunk(ChunkViewSource &, LevelChunk &);
    virtual bool isShutdownDone();
    virtual void loadChunk(LevelChunk &, bool);
    virtual void shutdown();
    virtual void flushPendingWrites();
    void _upgradeFix(LevelChunk &, BlockSource &);
    void _loadAndBlendFromDB(LevelChunk &);
    void _hasChunk(DBChunkStorageKey const&);
    void _applyChunkFixup(LevelChunk *, BlockSource &);
    void _serializeChunk(LevelChunk const&, DBStorageWriteBatch &);
    void registerUpgradeFixHandler(std::function<void (LevelChunk &, BlockSource &)>);
    void _loadChunkFromDB(LevelChunk &);
    void _getBuffer();
    DBChunkStorage(std::unique_ptr<ChunkSource>, DBStorage &, Scheduler &);
    void freeCaches();
    void _hasChunkUncached(DBChunkStorageKey const&);
    void _writeBatch();
};
