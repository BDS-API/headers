#pragma once

#include "../../io/ReadOnlyBinaryStream"
#include "../../actor/unmapped/ActorUniqueID"
#include "../../io/BinaryStream"
#include "../../nbt/CompoundTag"


class UpdateTradePacket : Packet {

public:
    UpdateTradePacket::~UpdateTradePacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    UpdateTradePacket(void);
    UpdateTradePacket(ContainerID, ContainerType, int, std::string const&, CompoundTag &&, ActorUniqueID const&, ActorUniqueID const, int, bool, bool);
};
