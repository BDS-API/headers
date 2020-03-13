#pragma once

#include <string>
#include "Packet.h"


class UpdateBlockPacket : Packet {

public:
    ~UpdateBlockPacket(); // _ZN17UpdateBlockPacketD2Ev
    virtual void getId()const; // _ZNK17UpdateBlockPacket5getIdEv
    virtual std::string getName()const; // _ZNK17UpdateBlockPacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK17UpdateBlockPacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN17UpdateBlockPacket4readER20ReadOnlyBinaryStream
    UpdateBlockPacket(); // _ZN17UpdateBlockPacketC2Ev
    UpdateBlockPacket(BlockPos const&, unsigned int, Block const&, unsigned char); // _ZN17UpdateBlockPacketC2ERK8BlockPosjRK5Blockh
    void getBlock(Level const&)const; // _ZNK17UpdateBlockPacket8getBlockERK5Level
};
