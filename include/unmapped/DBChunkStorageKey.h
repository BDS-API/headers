#pragma once



class DBChunkStorageKey {

public:
    void hashCode()const;
    void operator==(DBChunkStorageKey const&)const;
    bool asSpan()const;
    DBChunkStorageKey(LevelChunk const&);
//  DBChunkStorageKey(ChunkPos const&, AutomaticID<Dimension, int>); //TODO: incomplete function definition
};
