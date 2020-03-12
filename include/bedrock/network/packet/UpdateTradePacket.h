#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include <string>
#include "../../nbt/CompoundTag.h"
#include "../../actor/unmapped/ActorUniqueID.h"
#include "Packet.h"


class UpdateTradePacket : Packet {

public:
    virtual void read(ReadOnlyBinaryStream &);
    virtual void getId()const;
    virtual std::string getName()const;
    ~UpdateTradePacket();
    virtual void write(BinaryStream &)const;
//  UpdateTradePacket(ContainerID, ContainerType, int, std::string const&, CompoundTag &&, ActorUniqueID const&, ActorUniqueID const, int, bool, bool); //TODO: incomplete function definition
    UpdateTradePacket();
};
