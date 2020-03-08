#pragma once

#include "../../item/ItemStack"
#include "../../io/ReadOnlyBinaryStream"
#include "../../actor/unmapped/ActorRuntimeID"
#include "../../io/BinaryStream"


class MobEquipmentPacket : Packet {

public:
    MobEquipmentPacket::~MobEquipmentPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    MobEquipmentPacket(void);
    MobEquipmentPacket(ActorRuntimeID, ItemStack const&, int, int, ContainerID);
    void _convertToBytes();
    void _convertFromBytes();
};
