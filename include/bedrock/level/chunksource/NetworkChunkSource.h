#pragma once

#include "../../util/ChunkPos"
#include "../LevelChunkFinalDeleter"
#include "../../../unmapped/Dimension"
#include "../LevelChunk"


class NetworkChunkSource : ChunkSource {

public:
    NetworkChunkSource::~NetworkChunkSource()
    virtual void getExistingChunk(ChunkPos const&);
    virtual void createNewChunk(ChunkPos const&, ChunkSource::LoadMode);
    virtual void getOrLoadChunk(ChunkPos const&, ChunkSource::LoadMode);
    virtual void acquireDiscarded(std::unique_ptr<LevelChunk, LevelChunkFinalDeleter>);
    virtual void getStorage()const;

    NetworkChunkSource(Dimension &);
};
