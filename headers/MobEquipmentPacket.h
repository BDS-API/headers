#pragma once

class MobEquipmentPacket : Packet {

    virtual void MobEquipment~MobEquipmentPacket();
    virtual void MobEquipment~MobEquipmentPacket();
    virtual void MobEquipmentgetId(void)const;
    virtual void _ZNK18MobEquipmentPacket7getNameB5cxx11Ev;
    virtual void MobEquipmentwrite(BinaryStream &)const;
    virtual void MobEquipmentread(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
