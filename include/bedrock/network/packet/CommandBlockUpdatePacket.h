#pragma once

#include "../../io/ReadOnlyBinaryStream"
#include "../../actor/unmapped/ActorRuntimeID"
#include "../../../unmapped/BaseCommandBlock"
#include "../../io/BinaryStream"
#include "../../block/unmapped/BlockSource"
#include "../../block/actor/CommandBlockActor"


class CommandBlockUpdatePacket : Packet {

public:
    CommandBlockUpdatePacket::~CommandBlockUpdatePacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    CommandBlockUpdatePacket(BlockSource &, CommandBlockActor const&);
    CommandBlockUpdatePacket(ActorRuntimeID, BaseCommandBlock const&);
    CommandBlockUpdatePacket(void);
};
