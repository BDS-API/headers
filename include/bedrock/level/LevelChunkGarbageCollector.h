#pragma once

#include "LevelChunk.h"
#include "../../unmapped/Dimension.h"
#include <memory>


class LevelChunkGarbageCollector {

public:
    void getPendingDeletesCount()const;
    void acquireDiscardedChunk(std::unique_ptr<LevelChunk>);
    LevelChunkGarbageCollector(Dimension &);
    ~LevelChunkGarbageCollector();
    void flush();
    void _onFinalDelete();
};
