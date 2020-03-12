#pragma once

#include <memory>


class LevelChunkGarbageCollector {

public:
    void getPendingDeletesCount()const;
    ~LevelChunkGarbageCollector();
    LevelChunkGarbageCollector(Dimension &);
    void flush();
    void acquireDiscardedChunk(std::unique_ptr<LevelChunk>);
    void _onFinalDelete();
};
