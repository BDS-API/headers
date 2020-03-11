#pragma once

#include "./PostprocessingManager.h"
#include "../bedrock/util/ChunkPos.h"


namespace PostprocessingManager {

class Owns {

public:

    Owns(ChunkPos const&, PostprocessingManager &);
    Owns(PostprocessingManager &);
    ~Owns();
};

}