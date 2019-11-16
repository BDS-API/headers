#pragma once

class MobEquipmentPacket : Packet {

    virtual void MobEquipmentPacket::~MobEquipmentPacket();
    virtual void MobEquipmentPacket::~MobEquipmentPacket();
    virtual void getId(void)const;
    virtual void _ZNK18MobEquipmentPacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
