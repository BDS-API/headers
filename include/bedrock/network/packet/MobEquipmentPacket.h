#pragma once

#include "../../io/ReadOnlyBinaryStream"
#include "../../io/BinaryStream"
#include "../../../unmapped/ActorRuntimeID"
#include "../../item/ItemStack"


class MobEquipmentPacket : Packet {

public:
    virtual MobEquipmentPacket::~MobEquipmentPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    MobEquipmentPacket(void);
    MobEquipmentPacket(ActorRuntimeID, ItemStack const&, int, int, ContainerID);
    void _convertToBytes(void);
    void _convertFromBytes(void);
};
