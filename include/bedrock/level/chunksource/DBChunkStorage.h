#pragma once

#include <memory>
#include <functional>
#include "ChunkSource.h"


class DBChunkStorage : ChunkSource {

public:
    static long threadBatch;
    static std::string threadBuffer;

    ~DBChunkStorage(); // _ZN14DBChunkStorageD2Ev
    virtual void shutdown(); // _ZN14DBChunkStorage8shutdownEv
    virtual bool isShutdownDone(); // _ZN14DBChunkStorage14isShutdownDoneEv
    virtual void postProcess(ChunkViewSource &); // _ZN14DBChunkStorage11postProcessER15ChunkViewSource
    virtual void checkAndReplaceChunk(ChunkViewSource &, LevelChunk &); // _ZN14DBChunkStorage20checkAndReplaceChunkER15ChunkViewSourceR10LevelChunk
    virtual void loadChunk(LevelChunk &, bool); // _ZN14DBChunkStorage9loadChunkER10LevelChunkb
    virtual void saveLiveChunk(LevelChunk &); // _ZN14DBChunkStorage13saveLiveChunkER10LevelChunk
    virtual void hintDiscardBatchBegin(); // _ZN14DBChunkStorage21hintDiscardBatchBeginEv
    virtual void hintDiscardBatchEnd(); // _ZN14DBChunkStorage19hintDiscardBatchEndEv
    virtual void acquireDiscarded(std::unique_ptr<LevelChunk>); // _ZN14DBChunkStorage16acquireDiscardedESt10unique_ptrI10LevelChunk22LevelChunkFinalDeleterE
    virtual void flushPendingWrites(); // _ZN14DBChunkStorage18flushPendingWritesEv
    DBChunkStorage(std::unique_ptr<ChunkSource>, DBStorage &, Scheduler &); // _ZN14DBChunkStorageC2ESt10unique_ptrI11ChunkSourceSt14default_deleteIS1_EER9DBStorageR9Scheduler
    void _writeBatch(); // _ZN14DBChunkStorage11_writeBatchEv
    void _hasChunkUncached(DBChunkStorageKey const&); // _ZN14DBChunkStorage17_hasChunkUncachedERK17DBChunkStorageKey
    void _hasChunk(DBChunkStorageKey const&); // _ZN14DBChunkStorage9_hasChunkERK17DBChunkStorageKey
    void _loadChunkFromDB(LevelChunk &); // _ZN14DBChunkStorage16_loadChunkFromDBER10LevelChunk
    void _applyChunkFixup(LevelChunk *, BlockSource &); // _ZN14DBChunkStorage16_applyChunkFixupEP10LevelChunkR11BlockSource
    void _upgradeFix(LevelChunk &, BlockSource &); // _ZN14DBChunkStorage11_upgradeFixER10LevelChunkR11BlockSource
    void _loadAndBlendFromDB(LevelChunk &); // _ZN14DBChunkStorage19_loadAndBlendFromDBER10LevelChunk
    void _serializeChunk(LevelChunk const&, DBStorageWriteBatch &); // _ZN14DBChunkStorage15_serializeChunkERK10LevelChunkR19DBStorageWriteBatch
    void _getBuffer(); // _ZN14DBChunkStorage10_getBufferEv
    void freeCaches(); // _ZN14DBChunkStorage10freeCachesEv
    void registerUpgradeFixHandler(std::function<void (LevelChunk &, BlockSource &)>); // _ZN14DBChunkStorage25registerUpgradeFixHandlerESt8functionIFvR10LevelChunkR11BlockSourceEE
};
