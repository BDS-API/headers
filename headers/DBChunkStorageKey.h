#pragma once

class DBChunkStorageKey {

public:

    void DBChunkStorageKey(LevelChunk const&);
    void DBChunkStorageKey(ChunkPos const&, AutomaticID<Dimension, int>);
    void asSpan(void)const;
    void hashCode(void)const;
};
