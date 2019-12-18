#pragma once

class MobEquipmentPacket : Packet {

public:
    virtual ~MobEquipmentPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void MobEquipmentPacket(void);
    void MobEquipmentPacket(ActorRuntimeID, ItemStack const&, int, int, ContainerID);
    void _convertToBytes(void);
    void _convertFromBytes(void);
};
