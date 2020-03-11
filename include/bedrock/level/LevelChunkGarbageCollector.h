#pragma once

#include "./LevelChunk.h"
#include <memory>
#include "../../unmapped/Dimension.h"


class LevelChunkGarbageCollector {

public:

    void _onFinalDelete();
    LevelChunkGarbageCollector(Dimension &);
    void acquireDiscardedChunk(std::unique_ptr<LevelChunk, std::default_delete<LevelChunk>>);
    void getPendingDeletesCount()const;
    void flush();
    ~LevelChunkGarbageCollector();
};
