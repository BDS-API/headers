#pragma once

class NetworkChunkSource : ChunkSource {

public:
    virtual NetworkChunkSource::~NetworkChunkSource();
    virtual void getExistingChunk(ChunkPos const&);
    virtual void createNewChunk(ChunkPos const&, ChunkSource::LoadMode);
    virtual void getOrLoadChunk(ChunkPos const&, ChunkSource::LoadMode);
    virtual void acquireDiscarded(std::unique_ptr<LevelChunk, LevelChunkFinalDeleter>);
    virtual void getStorage(void)const;

    NetworkChunkSource(Dimension &);
};
