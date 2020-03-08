#pragma once

#include "../../io/BinaryStream"
#include "../../actor/unmapped/ActorRuntimeID"
#include "../../io/ReadOnlyBinaryStream"
#include "../../item/ItemStack"


class MobEquipmentPacket : Packet {

public:
    virtual MobEquipmentPacket::~MobEquipmentPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    MobEquipmentPacket(void);
    MobEquipmentPacket(ActorRuntimeID, ItemStack const&, int, int, ContainerID);
    void _convertToBytes();
    void _convertFromBytes();
};
