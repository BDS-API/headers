#pragma once

#include "../../io/BinaryStream"
#include "../../util/ChunkPos"
#include "../../io/ReadOnlyBinaryStream"


class LevelChunkPacket : Packet {

public:

    virtual LevelChunkPacket::~LevelChunkPacket()
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
