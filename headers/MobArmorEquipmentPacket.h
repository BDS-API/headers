#pragma once

class MobArmorEquipmentPacket : Packet {

    virtual void MobArmorEquipmentPacket::~MobArmorEquipmentPacket();
    virtual void MobArmorEquipmentPacket::~MobArmorEquipmentPacket();
    virtual void getId(void)const;
    virtual void _ZNK23MobArmorEquipmentPacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
