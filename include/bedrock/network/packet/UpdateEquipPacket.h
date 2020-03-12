#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "../../nbt/CompoundTag.h"
#include "../../actor/unmapped/ActorUniqueID.h"
#include "Packet.h"


class UpdateEquipPacket : Packet {

public:
    virtual void read(ReadOnlyBinaryStream &);
    virtual std::string getName()const;
    ~UpdateEquipPacket();
    virtual void write(BinaryStream &)const;
    virtual void getId()const;
    UpdateEquipPacket();
//  UpdateEquipPacket(ContainerID, ContainerType, int, CompoundTag &&, ActorUniqueID const&); //TODO: incomplete function definition
};
