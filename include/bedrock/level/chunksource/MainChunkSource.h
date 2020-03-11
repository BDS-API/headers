#pragma once

#include "../../util/Random.h"
#include <memory>
#include "./ChunkSource.h"
#include "../../util/ChunkPos.h"
#include "../LevelChunkFinalDeleter.h"
#include "../LevelChunk.h"


class MainChunkSource : ChunkSource {

public:
    virtual ~MainChunkSource();
    virtual void getExistingChunk(ChunkPos const&);
    virtual void getRandomChunk(Random &);
//  virtual void createNewChunk(ChunkPos const&, ChunkSource::LoadMode); //TODO: incomplete function definition
    virtual void acquireDiscarded(std::unique_ptr<LevelChunk, LevelChunkFinalDeleter>);
    virtual void getChunkMap();
    virtual void getStorage()const;
    virtual void clearDeletedEntities();

    MainChunkSource(std::unique_ptr<ChunkSource, std::default_delete<ChunkSource>>);
};
