#pragma once

#include "../../io/BinaryStream"
#include "../../nbt/CompoundTag"
#include "../../io/ReadOnlyBinaryStream"
#include "../../actor/unmapped/ActorUniqueID"


class UpdateEquipPacket : Packet {

public:
    virtual UpdateEquipPacket::~UpdateEquipPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    UpdateEquipPacket(void);
    UpdateEquipPacket(ContainerID, ContainerType, int, CompoundTag &&, ActorUniqueID const&);
};
