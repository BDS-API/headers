#pragma once

#include "../../nbt/CompoundTag.h"
#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "./Packet.h"
#include "../../actor/unmapped/ActorUniqueID.h"
#include <string>


class UpdateEquipPacket : Packet {

public:
    virtual ~UpdateEquipPacket();
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    UpdateEquipPacket();
//  UpdateEquipPacket(ContainerID, ContainerType, int, CompoundTag &&, ActorUniqueID const&); //TODO: incomplete function definition
};
