#pragma once

#include "../../util/BlockPos.h"
#include <string>
#include "Packet.h"


class BlockEventPacket : public Packet {

public:
    virtual ~BlockEventPacket(); // _ZN16BlockEventPacketD2Ev
    virtual void __fake_function0(); // fake
    virtual void getId()const; // _ZNK16BlockEventPacket5getIdEv
    virtual std::string getName()const; // _ZNK16BlockEventPacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK16BlockEventPacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN16BlockEventPacket4readER20ReadOnlyBinaryStream
    BlockEventPacket(BlockPos, int, int); // _ZN16BlockEventPacketC2E8BlockPosii
    BlockEventPacket(); // _ZN16BlockEventPacketC2Ev
};
