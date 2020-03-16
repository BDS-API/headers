#pragma once

#include "../../nbt/CompoundTag.h"
#include <string>
#include "Packet.h"


class BlockActorDataPacket : public Packet {

public:
    virtual ~BlockActorDataPacket(); // _ZN20BlockActorDataPacketD2Ev
    virtual void __fake_function0(); // fake
    virtual void getId()const; // _ZNK20BlockActorDataPacket5getIdEv
    virtual std::string getName()const; // _ZNK20BlockActorDataPacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK20BlockActorDataPacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN20BlockActorDataPacket4readER20ReadOnlyBinaryStream
    BlockActorDataPacket(); // _ZN20BlockActorDataPacketC2Ev
    BlockActorDataPacket(BlockActorDataPacket const&); // _ZN20BlockActorDataPacketC2ERKS_
    BlockActorDataPacket(BlockPos const&, CompoundTag); // _ZN20BlockActorDataPacketC2ERK8BlockPos11CompoundTag
};
