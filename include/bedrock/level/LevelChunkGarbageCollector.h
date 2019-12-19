#pragma once

using namespace Dimension;

class LevelChunkGarbageCollector {

public:

    void flush(void);
    LevelChunkGarbageCollector(Dimension&);
    void acquireDiscardedChunk(std::unique_ptr<LevelChunk, std::default_delete<LevelChunk>>);
};
