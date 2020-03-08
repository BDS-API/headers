#pragma once

#include "../bedrock/level/LevelChunk"
#include "../bedrock/util/ChunkPos"


class DBChunkStorageKey {

public:

    DBChunkStorageKey(LevelChunk const&);
    DBChunkStorageKey(ChunkPos const&, AutomaticID<Dimension, int>);
    bool asSpan()const;
    void hashCode()const;
};
