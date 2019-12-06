#pragma once

class WorldLimitChunkSource : ChunkSource {

public:
    virtual ~WorldLimitChunkSource();
    virtual void shutdown(void);
    virtual void getExistingChunk(ChunkPos const&);
    virtual void createNewChunk(ChunkPos const&, ChunkSource::LoadMode);
    virtual bool isWithinWorldLimit(ChunkPos const&)const;

    void WorldLimitChunkSource(std::unique_ptr<ChunkSource, std::default_delete<ChunkSource>>, BlockPos const&);
};
