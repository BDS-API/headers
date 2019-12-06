#pragma once

class NetworkChunkSource : ChunkSource {

public:
    virtual ~NetworkChunkSource();
    virtual void getExistingChunk(ChunkPos const&);
    virtual void createNewChunk(ChunkPos const&, ChunkSource::LoadMode);
    virtual void getOrLoadChunk(ChunkPos const&, ChunkSource::LoadMode);
    virtual void acquireDiscarded(std::unique_ptr<LevelChunk, std::default_delete<LevelChunk>>);
    virtual void getStorage(void)const;

    void NetworkChunkSource(Dimension &);
};
