#pragma once

class MainChunkSource : ChunkSource {

public:
    virtual MainChunkSource::~MainChunkSource();
    virtual void getExistingChunk(ChunkPos const&);
    virtual void getRandomChunk(Random &);
    virtual void createNewChunk(ChunkPos const&, ChunkSource::LoadMode);
    virtual void acquireDiscarded(std::unique_ptr<LevelChunk, LevelChunkFinalDeleter>);
    virtual void getChunkMap(void);
    virtual void getStorage(void)const;
    virtual void clearDeletedEntities(void);

    MainChunkSource(std::unique_ptr<ChunkSource, std::default_delete<ChunkSource>>);
};
