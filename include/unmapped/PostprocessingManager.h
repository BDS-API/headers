#pragma once



class PostprocessingManager {

public:

    PostprocessingManager(void);
    void tryLock(ChunkPos const&);
    void _release(ChunkPos const&);
};
