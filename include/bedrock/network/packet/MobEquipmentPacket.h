#pragma once

#include <string>
#include "Packet.h"
#include "../../actor/unmapped/ActorRuntimeID.h"


class MobEquipmentPacket : Packet {

public:
    virtual std::string getName()const;
    virtual void read(ReadOnlyBinaryStream &);
    ~MobEquipmentPacket();
    virtual void write(BinaryStream &)const;
    virtual void getId()const;
    MobEquipmentPacket();
    void _convertFromBytes();
//  MobEquipmentPacket(ActorRuntimeID, ItemStack const&, int, int, ContainerID); //TODO: incomplete function definition
    void _convertToBytes();
};
