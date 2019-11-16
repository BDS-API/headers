#pragma once

class SetTitlePacket : Packet {

    virtual void SetTitlePacket::~SetTitlePacket();
    virtual void SetTitlePacket::~SetTitlePacket();
    virtual void getId(void)const;
    virtual void _ZNK14SetTitlePacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
