#pragma once

#include <memory>
#include "ChunkSource.h"


class MainChunkSource : ChunkSource {

public:
    virtual void getStorage()const;
    virtual void clearDeletedEntities();
    virtual void getRandomChunk(Random &);
    virtual void getExistingChunk(ChunkPos const&);
    virtual void getChunkMap();
//  virtual void createNewChunk(ChunkPos const&, ChunkSource::LoadMode); //TODO: incomplete function definition
    ~MainChunkSource();
    virtual void acquireDiscarded(std::unique_ptr<LevelChunk>);
    MainChunkSource(std::unique_ptr<ChunkSource>);
};
