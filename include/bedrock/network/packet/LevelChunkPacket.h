#pragma once

#include <string>
#include "Packet.h"


class LevelChunkPacket : Packet {

public:
    class SubChunkMetadata;

    virtual void read(ReadOnlyBinaryStream &);
    ~LevelChunkPacket();
    virtual void getId()const;
    virtual void write(BinaryStream &)const;
    virtual std::string getName()const;
    LevelChunkPacket();
    void readCacheMetadata(ReadOnlyBinaryStream &);
    void writeCacheMetadata(BinaryStream &)const;
    LevelChunkPacket(ChunkPos const&, bool);
    void getCacheBlobsCount()const;
    void getMetadata()const;
    void pushSubChunkMetadata(unsigned long);
    class SubChunkMetadata {

    public:
        SubChunkMetadata(unsigned long);
        SubChunkMetadata();
    };
};
