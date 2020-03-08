#pragma once

#include "../../io/ReadOnlyBinaryStream"
#include "../../../unmapped/BaseCommandBlock"
#include "../../../unmapped/BlockSource"
#include "../../io/BinaryStream"
#include "../../../unmapped/ActorRuntimeID"


class CommandBlockUpdatePacket : Packet {

public:
    virtual CommandBlockUpdatePacket::~CommandBlockUpdatePacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    CommandBlockUpdatePacket(BlockSource &, CommandBlockActor const&);
    CommandBlockUpdatePacket(ActorRuntimeID, BaseCommandBlock const&);
    CommandBlockUpdatePacket(void);
};
