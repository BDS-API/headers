#pragma once

class Dimension::LevelChunkGarbageCollector {

public:

    void flush(void);
    void LevelChunkGarbageCollector(Dimension&);
    void acquireDiscardedChunk(std::unique_ptr<LevelChunk, std::default_delete<LevelChunk>>);
};
