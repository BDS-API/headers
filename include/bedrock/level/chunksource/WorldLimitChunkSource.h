#pragma once

#include "../../util/ChunkPos.h"
#include <memory>
#include "./ChunkSource.h"
#include "../../util/BlockPos.h"


class WorldLimitChunkSource : ChunkSource {

public:
    virtual ~WorldLimitChunkSource();
    virtual void shutdown();
    virtual void getExistingChunk(ChunkPos const&);
//  virtual void createNewChunk(ChunkPos const&, ChunkSource::LoadMode); //TODO: incomplete function definition
    virtual bool isWithinWorldLimit(ChunkPos const&)const;

    WorldLimitChunkSource(std::unique_ptr<ChunkSource, std::default_delete<ChunkSource>>, BlockPos const&);
};
