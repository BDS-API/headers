#pragma once

#include <string>
#include "Packet.h"


class LevelChunkPacket : Packet {

public:
    class SubChunkMetadata;

    ~LevelChunkPacket(); // _ZN16LevelChunkPacketD2Ev
    virtual void getId()const; // _ZNK16LevelChunkPacket5getIdEv
    virtual std::string getName()const; // _ZNK16LevelChunkPacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK16LevelChunkPacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN16LevelChunkPacket4readER20ReadOnlyBinaryStream
    LevelChunkPacket(); // _ZN16LevelChunkPacketC2Ev
    LevelChunkPacket(ChunkPos const&, bool); // _ZN16LevelChunkPacketC2ERK8ChunkPosb
    void writeCacheMetadata(BinaryStream &)const; // _ZNK16LevelChunkPacket18writeCacheMetadataER12BinaryStream
    void readCacheMetadata(ReadOnlyBinaryStream &); // _ZN16LevelChunkPacket17readCacheMetadataER20ReadOnlyBinaryStream
    void getMetadata()const; // _ZNK16LevelChunkPacket11getMetadataEv
    void pushSubChunkMetadata(unsigned long); // _ZN16LevelChunkPacket20pushSubChunkMetadataEm
    void getCacheBlobsCount()const; // _ZNK16LevelChunkPacket18getCacheBlobsCountEv
    class SubChunkMetadata {

    public:
        SubChunkMetadata(); // _ZN16LevelChunkPacket16SubChunkMetadataC2Ev
        SubChunkMetadata(unsigned long); // _ZN16LevelChunkPacket16SubChunkMetadataC2Em
    };
};
