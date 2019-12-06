#pragma once

class UpdateEquipPacket : Packet {

public:
    virtual ~UpdateEquipPacket();
    virtual void getId(void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void UpdateEquipPacket(void);
    void UpdateEquipPacket(ContainerID, ContainerType, int, CompoundTag &&, ActorUniqueID const&);
};
