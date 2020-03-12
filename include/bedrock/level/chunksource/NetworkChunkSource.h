#pragma once

#include <memory>
#include "ChunkSource.h"


class NetworkChunkSource : ChunkSource {

public:
//  virtual void getOrLoadChunk(ChunkPos const&, ChunkSource::LoadMode); //TODO: incomplete function definition
    virtual void getStorage()const;
    ~NetworkChunkSource();
//  virtual void createNewChunk(ChunkPos const&, ChunkSource::LoadMode); //TODO: incomplete function definition
    virtual void acquireDiscarded(std::unique_ptr<LevelChunk>);
    virtual void getExistingChunk(ChunkPos const&);
    NetworkChunkSource(Dimension &);
};
