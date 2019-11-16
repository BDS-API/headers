#pragma once

class SetScorePacket : Packet {

    virtual void SetScorePacket::~SetScorePacket();
    virtual void SetScorePacket::~SetScorePacket();
    virtual void getId(void)const;
    virtual void _ZNK14SetScorePacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
