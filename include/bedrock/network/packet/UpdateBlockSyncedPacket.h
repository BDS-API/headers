#pragma once

#include <string>
#include "UpdateBlockPacket.h"


class UpdateBlockSyncedPacket : UpdateBlockPacket {

public:
    ~UpdateBlockSyncedPacket(); // _ZN23UpdateBlockSyncedPacketD2Ev
    virtual void getId()const; // _ZNK23UpdateBlockSyncedPacket5getIdEv
    virtual std::string getName()const; // _ZNK23UpdateBlockSyncedPacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK23UpdateBlockSyncedPacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN23UpdateBlockSyncedPacket4readER20ReadOnlyBinaryStream
    UpdateBlockSyncedPacket(); // _ZN23UpdateBlockSyncedPacketC2Ev
    UpdateBlockSyncedPacket(BlockPos const&, unsigned int, Block const&, unsigned char, ActorBlockSyncMessage const&); // _ZN23UpdateBlockSyncedPacketC2ERK8BlockPosjRK5BlockhRK21ActorBlockSyncMessage
};
