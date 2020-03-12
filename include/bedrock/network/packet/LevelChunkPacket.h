#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "../../util/ChunkPos.h"
#include "Packet.h"


class LevelChunkPacket : Packet {

public:
    class SubChunkMetadata;

    virtual void write(BinaryStream &)const;
    virtual void getId()const;
    ~LevelChunkPacket();
    virtual void read(ReadOnlyBinaryStream &);
    virtual std::string getName()const;
    void getMetadata()const;
    void readCacheMetadata(ReadOnlyBinaryStream &);
    void getCacheBlobsCount()const;
    LevelChunkPacket();
    void writeCacheMetadata(BinaryStream &)const;
    LevelChunkPacket(ChunkPos const&, bool);
    void pushSubChunkMetadata(unsigned long);
    class SubChunkMetadata {

    public:
        SubChunkMetadata(unsigned long);
        SubChunkMetadata();
    };
};
