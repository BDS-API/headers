#pragma once

class UpdateEquipPacket : Packet {

public:
    virtual UpdateEquipPacket::~UpdateEquipPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    UpdateEquipPacket(void);
    UpdateEquipPacket(ContainerID, ContainerType, int, CompoundTag &&, ActorUniqueID const&);
};
