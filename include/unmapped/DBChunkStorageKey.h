#pragma once

#include "../bedrock/level/LevelChunk"


class DBChunkStorageKey {

public:

    DBChunkStorageKey(LevelChunk const&);
    DBChunkStorageKey(ChunkPos const&, AutomaticID<Dimension, int>);
    bool asSpan(void)const;
    void hashCode(void)const;
};
