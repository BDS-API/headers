#pragma once

#include "../bedrock/util/ChunkPos.h"


class PostprocessingManager {

public:

    PostprocessingManager();
    ~PostprocessingManager();
    void tryLock(ChunkPos const&);
    void _release(ChunkPos const&);
};
