#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "../../../unmapped/BaseCommandBlock.h"
#include "../../block/unmapped/BlockSource.h"
#include "../../actor/unmapped/ActorRuntimeID.h"
#include "../../block/actor/CommandBlockActor.h"
#include "Packet.h"


class CommandBlockUpdatePacket : Packet {

public:
    ~CommandBlockUpdatePacket();
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void getId()const;
    virtual std::string getName()const;
    CommandBlockUpdatePacket(ActorRuntimeID, BaseCommandBlock const&);
    CommandBlockUpdatePacket(BlockSource &, CommandBlockActor const&);
    CommandBlockUpdatePacket();
};
