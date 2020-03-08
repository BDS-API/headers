#pragma once

#include "../bedrock/util/ChunkPos"


class PostprocessingManager {

public:

    PostprocessingManager(void);
    void tryLock(ChunkPos const&);
    void _release(ChunkPos const&);
};
