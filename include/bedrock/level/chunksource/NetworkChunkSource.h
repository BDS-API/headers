#pragma once

#include "../../util/ChunkPos.h"
#include "../LevelChunk.h"
#include "ChunkSource.h"
#include <memory>
#include "../../../unmapped/Dimension.h"


class NetworkChunkSource : ChunkSource {

public:
    virtual void getStorage()const;
//  virtual void getOrLoadChunk(ChunkPos const&, ChunkSource::LoadMode); //TODO: incomplete function definition
    virtual void getExistingChunk(ChunkPos const&);
    ~NetworkChunkSource();
    virtual void acquireDiscarded(std::unique_ptr<LevelChunk>);
//  virtual void createNewChunk(ChunkPos const&, ChunkSource::LoadMode); //TODO: incomplete function definition
    NetworkChunkSource(Dimension &);
};
