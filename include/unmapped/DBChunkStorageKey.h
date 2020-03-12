#pragma once

#include "../bedrock/util/ChunkPos.h"
#include "../bedrock/level/LevelChunk.h"
#include "Dimension.h"


class DBChunkStorageKey {

public:
    void hashCode()const;
    DBChunkStorageKey(LevelChunk const&);
//  DBChunkStorageKey(ChunkPos const&, AutomaticID<Dimension, int>); //TODO: incomplete function definition
    bool asSpan()const;
    void operator==(DBChunkStorageKey const&)const;
};
