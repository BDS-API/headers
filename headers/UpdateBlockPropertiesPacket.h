#pragma once

class UpdateBlockPropertiesPacket : Packet {

    virtual void UpdateBlockPropertiesPacket::~UpdateBlockPropertiesPacket();
    virtual void UpdateBlockPropertiesPacket::~UpdateBlockPropertiesPacket();
    virtual void getId(void)const;
    virtual void _ZNK27UpdateBlockPropertiesPacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
