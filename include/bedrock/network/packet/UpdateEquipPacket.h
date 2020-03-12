#pragma once

#include <string>
#include "Packet.h"


class UpdateEquipPacket : Packet {

public:
    virtual std::string getName()const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void getId()const;
    virtual void write(BinaryStream &)const;
    ~UpdateEquipPacket();
//  UpdateEquipPacket(ContainerID, ContainerType, int, CompoundTag &&, ActorUniqueID const&); //TODO: incomplete function definition
    UpdateEquipPacket();
};
