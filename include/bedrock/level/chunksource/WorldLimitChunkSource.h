#pragma once

#include <memory>
#include "ChunkSource.h"


class WorldLimitChunkSource : ChunkSource {

public:
    virtual void shutdown();
    ~WorldLimitChunkSource();
    virtual void getExistingChunk(ChunkPos const&);
    virtual bool isWithinWorldLimit(ChunkPos const&)const;
//  virtual void createNewChunk(ChunkPos const&, ChunkSource::LoadMode); //TODO: incomplete function definition
    WorldLimitChunkSource(std::unique_ptr<ChunkSource>, BlockPos const&);
};
