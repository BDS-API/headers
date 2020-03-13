#pragma once

#include <memory>


class LevelChunkGarbageCollector {

public:
    void _onFinalDelete(); // _ZN26LevelChunkGarbageCollector14_onFinalDeleteEv
    LevelChunkGarbageCollector(Dimension &); // _ZN26LevelChunkGarbageCollectorC2ER9Dimension
    void acquireDiscardedChunk(std::unique_ptr<LevelChunk>); // _ZN26LevelChunkGarbageCollector21acquireDiscardedChunkESt10unique_ptrI10LevelChunkSt14default_deleteIS1_EE
    void getPendingDeletesCount()const; // _ZNK26LevelChunkGarbageCollector22getPendingDeletesCountEv
    void flush(); // _ZN26LevelChunkGarbageCollector5flushEv
    ~LevelChunkGarbageCollector(); // _ZN26LevelChunkGarbageCollectorD2Ev
};
