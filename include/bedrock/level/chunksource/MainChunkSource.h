#pragma once

#include <memory>
#include "ChunkSource.h"


class MainChunkSource : public ChunkSource {

public:
    virtual ~MainChunkSource(); // _ZN15MainChunkSourceD2Ev
    virtual void __fake_function0(); // fake
    virtual void getExistingChunk(ChunkPos const&); // _ZN15MainChunkSource16getExistingChunkERK8ChunkPos
    virtual void getRandomChunk(Random &); // _ZN15MainChunkSource14getRandomChunkER6Random
    virtual void createNewChunk__incomplete0(ChunkPos const&, long); //TODO: incomplete function definition // _ZN15MainChunkSource14createNewChunkERK8ChunkPosN11ChunkSource8LoadModeE
    virtual void acquireDiscarded(std::unique_ptr<LevelChunk>); // _ZN15MainChunkSource16acquireDiscardedESt10unique_ptrI10LevelChunk22LevelChunkFinalDeleterE
    virtual void getChunkMap(); // _ZN15MainChunkSource11getChunkMapEv
    virtual void getStorage()const; // _ZNK15MainChunkSource10getStorageEv
    virtual void clearDeletedEntities(); // _ZN15MainChunkSource20clearDeletedEntitiesEv
    MainChunkSource(std::unique_ptr<ChunkSource>); // _ZN15MainChunkSourceC2ESt10unique_ptrI11ChunkSourceSt14default_deleteIS1_EE
};
