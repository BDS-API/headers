#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "./Packet.h"
#include "../../util/ChunkPos.h"
#include <string>


class LevelChunkPacket : Packet {

public:

    virtual ~LevelChunkPacket();
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    LevelChunkPacket();
    LevelChunkPacket(ChunkPos const&, bool);
    void writeCacheMetadata(BinaryStream &)const;
    void readCacheMetadata(ReadOnlyBinaryStream &);
    void getMetadata()const;
    void pushSubChunkMetadata(unsigned long);
    void getCacheBlobsCount()const;
};
