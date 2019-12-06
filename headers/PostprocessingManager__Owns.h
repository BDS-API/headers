#pragma once

class PostprocessingManager::Owns {

public:

    void Owns(ChunkPos const&, PostprocessingManager&);
    void Owns(PostprocessingManager&);
};
