#pragma once

#include <memory>
#include "ChunkSource.h"


class NetworkChunkSource : public ChunkSource {

public:
    virtual ~NetworkChunkSource(); // _ZN18NetworkChunkSourceD2Ev
    virtual void __fake_function0(); // fake
    virtual void getExistingChunk(ChunkPos const&); // _ZN18NetworkChunkSource16getExistingChunkERK8ChunkPos
    virtual void createNewChunk__incomplete0(ChunkPos const&, long); //TODO: incomplete function definition // _ZN18NetworkChunkSource14createNewChunkERK8ChunkPosN11ChunkSource8LoadModeE
    virtual void getOrLoadChunk__incomplete0(ChunkPos const&, long); //TODO: incomplete function definition // _ZN18NetworkChunkSource14getOrLoadChunkERK8ChunkPosN11ChunkSource8LoadModeE
    virtual void acquireDiscarded(std::unique_ptr<LevelChunk>); // _ZN18NetworkChunkSource16acquireDiscardedESt10unique_ptrI10LevelChunk22LevelChunkFinalDeleterE
    virtual void getStorage()const; // _ZNK18NetworkChunkSource10getStorageEv
    NetworkChunkSource(Dimension &); // _ZN18NetworkChunkSourceC2ER9Dimension
};
