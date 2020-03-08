#pragma once

#include "../../util/BlockPos"
#include "../../util/ChunkPos"


class WorldLimitChunkSource : ChunkSource {

public:
    virtual WorldLimitChunkSource::~WorldLimitChunkSource()
    virtual void shutdown();
    virtual void getExistingChunk(ChunkPos const&);
    virtual void createNewChunk(ChunkPos const&, ChunkSource::LoadMode);
    virtual bool isWithinWorldLimit(ChunkPos const&)const;

    WorldLimitChunkSource(std::unique_ptr<ChunkSource, std::default_delete<ChunkSource>>, BlockPos const&);
};
