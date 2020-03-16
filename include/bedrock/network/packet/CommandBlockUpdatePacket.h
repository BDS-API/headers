#pragma once

#include "../../actor/unmapped/ActorRuntimeID.h"
#include <string>
#include "Packet.h"


class CommandBlockUpdatePacket : public Packet {

public:
    virtual ~CommandBlockUpdatePacket(); // _ZN24CommandBlockUpdatePacketD2Ev
    virtual void __fake_function0(); // fake
    virtual void getId()const; // _ZNK24CommandBlockUpdatePacket5getIdEv
    virtual std::string getName()const; // _ZNK24CommandBlockUpdatePacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK24CommandBlockUpdatePacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN24CommandBlockUpdatePacket4readER20ReadOnlyBinaryStream
    CommandBlockUpdatePacket(BlockSource &, CommandBlockActor const&); // _ZN24CommandBlockUpdatePacketC2ER11BlockSourceRK17CommandBlockActor
    CommandBlockUpdatePacket(ActorRuntimeID, BaseCommandBlock const&); // _ZN24CommandBlockUpdatePacketC2E14ActorRuntimeIDRK16BaseCommandBlock
    CommandBlockUpdatePacket(); // _ZN24CommandBlockUpdatePacketC2Ev
};
