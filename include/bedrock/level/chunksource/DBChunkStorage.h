#pragma once

#include "ChunkViewSource.h"
#include "../storage/DBStorage.h"
#include <string>
#include "../../block/unmapped/BlockSource.h"
#include "../../../unmapped/DBChunkStorageKey.h"
#include "ChunkSource.h"
#include "../../../unmapped/DBStorageWriteBatch.h"
#include <functional>
#include <memory>
#include "../LevelChunk.h"
#include "../../Scheduler.h"


class DBChunkStorage : ChunkSource {

public:
    static long threadBatch;
    static std::string threadBuffer;

    virtual void checkAndReplaceChunk(ChunkViewSource &, LevelChunk &);
    virtual bool isShutdownDone();
    virtual void flushPendingWrites();
    virtual void postProcess(ChunkViewSource &);
    virtual void acquireDiscarded(std::unique_ptr<LevelChunk>);
    virtual void hintDiscardBatchEnd();
    virtual void shutdown();
    ~DBChunkStorage();
    virtual void saveLiveChunk(LevelChunk &);
    virtual void hintDiscardBatchBegin();
    virtual void loadChunk(LevelChunk &, bool);
    void _loadChunkFromDB(LevelChunk &);
    void _getBuffer();
    void _hasChunk(DBChunkStorageKey const&);
    void freeCaches();
    void _hasChunkUncached(DBChunkStorageKey const&);
    void _writeBatch();
    void _applyChunkFixup(LevelChunk *, BlockSource &);
    void registerUpgradeFixHandler(std::function<void (LevelChunk &, BlockSource &)>);
    void _upgradeFix(LevelChunk &, BlockSource &);
    void _serializeChunk(LevelChunk const&, DBStorageWriteBatch &);
    DBChunkStorage(std::unique_ptr<ChunkSource>, DBStorage &, Scheduler &);
    void _loadAndBlendFromDB(LevelChunk &);
};
