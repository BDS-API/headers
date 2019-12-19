#pragma once

class DBChunkStorageKey {

public:

    DBChunkStorageKey(LevelChunk const&);
    DBChunkStorageKey(ChunkPos const&, AutomaticID<Dimension, int>);
    void asSpan(void)const;
    void hashCode(void)const;
};
