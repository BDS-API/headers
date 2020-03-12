#pragma once

#include "../../util/ChunkPos.h"
#include "../../util/Random.h"
#include "ChunkSource.h"
#include <memory>
#include "../LevelChunk.h"


class MainChunkSource : ChunkSource {

public:
    virtual void acquireDiscarded(std::unique_ptr<LevelChunk>);
    virtual void clearDeletedEntities();
    virtual void getRandomChunk(Random &);
    virtual void getExistingChunk(ChunkPos const&);
    virtual void getChunkMap();
    virtual void getStorage()const;
    ~MainChunkSource();
//  virtual void createNewChunk(ChunkPos const&, ChunkSource::LoadMode); //TODO: incomplete function definition
    MainChunkSource(std::unique_ptr<ChunkSource>);
};
