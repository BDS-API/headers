#pragma once



class PostprocessingManager {

public:
    class Owns;

    ~PostprocessingManager();
    void _release(ChunkPos const&);
    PostprocessingManager();
    void tryLock(ChunkPos const&);
    class Owns {

    public:
        ~Owns();
        Owns(PostprocessingManager &);
        Owns(ChunkPos const&, PostprocessingManager &);
    };
};
