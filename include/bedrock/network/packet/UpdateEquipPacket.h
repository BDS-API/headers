#pragma once

#include "../../io/ReadOnlyBinaryStream"
#include "../../actor/unmapped/ActorUniqueID"
#include "../../io/BinaryStream"
#include "../../nbt/CompoundTag"


class UpdateEquipPacket : Packet {

public:
    UpdateEquipPacket::~UpdateEquipPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    UpdateEquipPacket(void);
    UpdateEquipPacket(ContainerID, ContainerType, int, CompoundTag &&, ActorUniqueID const&);
};
