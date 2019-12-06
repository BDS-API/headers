#pragma once

class PostprocessingManager {

public:

    void PostprocessingManager(void);
    void tryLock(ChunkPos const&);
    void _release(ChunkPos const&);
};
