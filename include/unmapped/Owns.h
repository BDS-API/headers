#pragma once

#include "../bedrock/util/ChunkPos"


using namespace PostprocessingManager;

class Owns {

public:

    Owns(ChunkPos const&, PostprocessingManager&);
    Owns(PostprocessingManager&);
};
