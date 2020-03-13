#pragma once



class PostprocessingManager {

public:
    class Owns;

    PostprocessingManager(); // _ZN21PostprocessingManagerC2Ev
    ~PostprocessingManager(); // _ZN21PostprocessingManagerD2Ev
    void tryLock(ChunkPos const&); // _ZN21PostprocessingManager7tryLockERK8ChunkPos
    void _release(ChunkPos const&); // _ZN21PostprocessingManager8_releaseERK8ChunkPos
    class Owns {

    public:
        Owns(ChunkPos const&, PostprocessingManager &); // _ZN21PostprocessingManager4OwnsC2ERK8ChunkPosRS_
        Owns(PostprocessingManager &); // _ZN21PostprocessingManager4OwnsC2ERS_
        ~Owns(); // _ZN21PostprocessingManager4OwnsD2Ev
    };
};
