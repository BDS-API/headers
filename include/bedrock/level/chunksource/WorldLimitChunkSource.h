#pragma once

#include "../../util/ChunkPos"
#include "../../util/BlockPos"


class WorldLimitChunkSource : ChunkSource {

public:
    WorldLimitChunkSource::~WorldLimitChunkSource()
    virtual void shutdown();
    virtual void getExistingChunk(ChunkPos const&);
    virtual void createNewChunk(ChunkPos const&, ChunkSource::LoadMode);
    virtual bool isWithinWorldLimit(ChunkPos const&)const;

    WorldLimitChunkSource(std::unique_ptr<ChunkSource, std::default_delete<ChunkSource>>, BlockPos const&);
};
