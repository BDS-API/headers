#pragma once

#include "../../io/ReadOnlyBinaryStream"
#include "../../../unmapped/ChunkPos"
#include "../../io/BinaryStream"


class LevelChunkPacket : Packet {

public:

    virtual LevelChunkPacket::~LevelChunkPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    LevelChunkPacket(void);
    LevelChunkPacket(ChunkPos const&, bool);
    void writeCacheMetadata(BinaryStream &)const;
    void readCacheMetadata(ReadOnlyBinaryStream &);
    void getMetadata(void)const;
    void pushSubChunkMetadata(unsigned long);
    void getCacheBlobsCount(void)const;
};
