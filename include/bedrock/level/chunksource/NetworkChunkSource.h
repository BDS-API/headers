#pragma once

#include <memory>
#include "../../../unmapped/Dimension.h"
#include "./ChunkSource.h"
#include "../../util/ChunkPos.h"
#include "../LevelChunkFinalDeleter.h"
#include "../LevelChunk.h"


class NetworkChunkSource : ChunkSource {

public:
    virtual ~NetworkChunkSource();
    virtual void getExistingChunk(ChunkPos const&);
//  virtual void createNewChunk(ChunkPos const&, ChunkSource::LoadMode); //TODO: incomplete function definition
//  virtual void getOrLoadChunk(ChunkPos const&, ChunkSource::LoadMode); //TODO: incomplete function definition
    virtual void acquireDiscarded(std::unique_ptr<LevelChunk, LevelChunkFinalDeleter>);
    virtual void getStorage()const;

    NetworkChunkSource(Dimension &);
};
