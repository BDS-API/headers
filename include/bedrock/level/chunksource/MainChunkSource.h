#pragma once

#include "../../util/Random"
#include "../LevelChunkFinalDeleter"
#include "../LevelChunk"
#include "../../util/ChunkPos"


class MainChunkSource : ChunkSource {

public:
    virtual MainChunkSource::~MainChunkSource()
    virtual void getExistingChunk(ChunkPos const&);
    virtual void getRandomChunk(Random &);
    virtual void createNewChunk(ChunkPos const&, ChunkSource::LoadMode);
    virtual void acquireDiscarded(std::unique_ptr<LevelChunk, LevelChunkFinalDeleter>);
    virtual void getChunkMap();
    virtual void getStorage()const;
    virtual void clearDeletedEntities();

    MainChunkSource(std::unique_ptr<ChunkSource, std::default_delete<ChunkSource>>);
};
