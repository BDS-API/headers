#pragma once

#include "../bedrock/util/ChunkPos"
#include "../bedrock/level/LevelChunk"


class DBChunkStorageKey {

public:

    DBChunkStorageKey(LevelChunk const&);
    DBChunkStorageKey(ChunkPos const&, AutomaticID<Dimension, int>);
    bool asSpan()const;
    void hashCode()const;
};
