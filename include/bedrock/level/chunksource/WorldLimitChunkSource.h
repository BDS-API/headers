#pragma once

#include "../../util/BlockPos.h"
#include "ChunkSource.h"
#include "../../util/ChunkPos.h"
#include <memory>


class WorldLimitChunkSource : ChunkSource {

public:
    virtual void getExistingChunk(ChunkPos const&);
//  virtual void createNewChunk(ChunkPos const&, ChunkSource::LoadMode); //TODO: incomplete function definition
    ~WorldLimitChunkSource();
    virtual void shutdown();
    virtual bool isWithinWorldLimit(ChunkPos const&)const;
    WorldLimitChunkSource(std::unique_ptr<ChunkSource>, BlockPos const&);
};
