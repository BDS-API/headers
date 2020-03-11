#pragma once

#include "../bedrock/util/ChunkPos.h"
#include "../bedrock/level/LevelChunk.h"
#include "./Dimension.h"
#include "./DBChunkStorageKey.h"


class DBChunkStorageKey {

public:

    DBChunkStorageKey(LevelChunk const&);
//  DBChunkStorageKey(ChunkPos const&, AutomaticID<Dimension, int>); //TODO: incomplete function definition
    bool asSpan()const;
    void hashCode()const;
    void operator==(DBChunkStorageKey const&)const;
};
