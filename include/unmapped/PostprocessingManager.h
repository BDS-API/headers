#pragma once

#include "../bedrock/util/ChunkPos.h"


class PostprocessingManager {

public:
    class Owns;

    PostprocessingManager();
    void _release(ChunkPos const&);
    void tryLock(ChunkPos const&);
    ~PostprocessingManager();
    class Owns {

    public:
        Owns(ChunkPos const&, PostprocessingManager &);
        Owns(PostprocessingManager &);
        ~Owns();
    };
};
