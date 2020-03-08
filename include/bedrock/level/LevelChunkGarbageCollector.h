#pragma once

#include "../../unmapped/Dimension"


class LevelChunkGarbageCollector {

public:

    void _onFinalDelete(void);
    LevelChunkGarbageCollector(Dimension &);
    void acquireDiscardedChunk(std::unique_ptr<LevelChunk, std::default_delete<LevelChunk>>);
    void getPendingDeletesCount(void)const;
    void flush(void);
};
