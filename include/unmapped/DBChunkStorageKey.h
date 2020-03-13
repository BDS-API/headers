#pragma once



class DBChunkStorageKey {

public:
    DBChunkStorageKey(LevelChunk const&); // _ZN17DBChunkStorageKeyC2ERK10LevelChunk
//  DBChunkStorageKey(ChunkPos const&, AutomaticID<Dimension, int>); //TODO: incomplete function definition // _ZN17DBChunkStorageKeyC2ERK8ChunkPos11AutomaticIDI9DimensioniE
    bool asSpan()const; // _ZNK17DBChunkStorageKey6asSpanEv
    void hashCode()const; // _ZNK17DBChunkStorageKey8hashCodeEv
    void operator==(DBChunkStorageKey const&)const; // _ZNK17DBChunkStorageKeyeqERKS_
};
