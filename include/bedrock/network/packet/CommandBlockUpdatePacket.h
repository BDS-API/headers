#pragma once

#include "../../actor/unmapped/ActorRuntimeID.h"
#include "../../block/actor/CommandBlockActor.h"
#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "./Packet.h"
#include "../../block/unmapped/BlockSource.h"
#include "../../../unmapped/BaseCommandBlock.h"
#include <string>


class CommandBlockUpdatePacket : Packet {

public:
    virtual ~CommandBlockUpdatePacket();
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    CommandBlockUpdatePacket(BlockSource &, CommandBlockActor const&);
    CommandBlockUpdatePacket(ActorRuntimeID, BaseCommandBlock const&);
    CommandBlockUpdatePacket();
};
