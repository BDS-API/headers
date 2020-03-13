#pragma once

#include <string>
#include "Packet.h"


class BlockPickRequestPacket : Packet {

public:
    ~BlockPickRequestPacket(); // _ZN22BlockPickRequestPacketD2Ev
    virtual void getId()const; // _ZNK22BlockPickRequestPacket5getIdEv
    virtual std::string getName()const; // _ZNK22BlockPickRequestPacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK22BlockPickRequestPacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN22BlockPickRequestPacket4readER20ReadOnlyBinaryStream
    BlockPickRequestPacket(); // _ZN22BlockPickRequestPacketC2Ev
    BlockPickRequestPacket(BlockPos const&, bool const&, unsigned char const&); // _ZN22BlockPickRequestPacketC2ERK8BlockPosRKbRKh
};
