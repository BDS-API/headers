#pragma once

class UpdateEquipPacket : Packet {

    virtual void UpdateEquipPacket::~UpdateEquipPacket();
    virtual void UpdateEquipPacket::~UpdateEquipPacket();
    virtual void getId(void)const;
    virtual void _ZNK17UpdateEquipPacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
