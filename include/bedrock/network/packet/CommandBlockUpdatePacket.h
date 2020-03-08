#pragma once

#include "../../io/BinaryStream"
#include "../../block/unmapped/BlockSource"
#include "../../actor/unmapped/ActorRuntimeID"
#include "../../io/ReadOnlyBinaryStream"
#include "../../../unmapped/BaseCommandBlock"
#include "../../block/actor/CommandBlockActor"


class CommandBlockUpdatePacket : Packet {

public:
    virtual CommandBlockUpdatePacket::~CommandBlockUpdatePacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    CommandBlockUpdatePacket(BlockSource &, CommandBlockActor const&);
    CommandBlockUpdatePacket(ActorRuntimeID, BaseCommandBlock const&);
    CommandBlockUpdatePacket(void);
};
