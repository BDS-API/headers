#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "../../item/ItemStack.h"
#include "../../actor/unmapped/ActorRuntimeID.h"
#include "Packet.h"


class MobEquipmentPacket : Packet {

public:
    virtual std::string getName()const;
    virtual void getId()const;
    virtual void write(BinaryStream &)const;
    ~MobEquipmentPacket();
    virtual void read(ReadOnlyBinaryStream &);
//  MobEquipmentPacket(ActorRuntimeID, ItemStack const&, int, int, ContainerID); //TODO: incomplete function definition
    void _convertFromBytes();
    MobEquipmentPacket();
    void _convertToBytes();
};
