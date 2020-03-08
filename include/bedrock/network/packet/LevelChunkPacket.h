#pragma once

#include "../../io/ReadOnlyBinaryStream"
#include "../../util/ChunkPos"
#include "../../io/BinaryStream"


class LevelChunkPacket : Packet {

public:

    LevelChunkPacket::~LevelChunkPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    LevelChunkPacket(void);
    LevelChunkPacket(ChunkPos const&, bool);
    void writeCacheMetadata(BinaryStream &)const;
    void readCacheMetadata(ReadOnlyBinaryStream &);
    void getMetadata()const;
    void pushSubChunkMetadata(unsigned long);
    void getCacheBlobsCount()const;
};
