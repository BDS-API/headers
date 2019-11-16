#pragma once

class UpdateSoftEnumPacket : Packet {

    virtual void UpdateSoftEnumPacket::~UpdateSoftEnumPacket();
    virtual void UpdateSoftEnumPacket::~UpdateSoftEnumPacket();
    virtual void getId(void)const;
    virtual void _ZNK20UpdateSoftEnumPacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
