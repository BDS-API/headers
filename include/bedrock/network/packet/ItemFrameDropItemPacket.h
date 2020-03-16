#pragma once

#include <string>
#include "Packet.h"


class ItemFrameDropItemPacket : public Packet {

public:
    virtual ~ItemFrameDropItemPacket(); // _ZN23ItemFrameDropItemPacketD2Ev
    virtual void __fake_function0(); // fake
    virtual void getId()const; // _ZNK23ItemFrameDropItemPacket5getIdEv
    virtual std::string getName()const; // _ZNK23ItemFrameDropItemPacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK23ItemFrameDropItemPacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN23ItemFrameDropItemPacket4readER20ReadOnlyBinaryStream
    ItemFrameDropItemPacket(); // _ZN23ItemFrameDropItemPacketC2Ev
    ItemFrameDropItemPacket(ItemStack const&); // _ZN23ItemFrameDropItemPacketC2ERK9ItemStack
};
