#pragma once

#include "../../actor/unmapped/ActorRuntimeID.h"
#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "./Packet.h"
#include "../../item/ItemStack.h"
#include <string>


class MobEquipmentPacket : Packet {

public:
    virtual ~MobEquipmentPacket();
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    MobEquipmentPacket();
//  MobEquipmentPacket(ActorRuntimeID, ItemStack const&, int, int, ContainerID); //TODO: incomplete function definition
    void _convertToBytes();
    void _convertFromBytes();
};
