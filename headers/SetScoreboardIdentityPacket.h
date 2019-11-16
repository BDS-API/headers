#pragma once

class SetScoreboardIdentityPacket : Packet {

    virtual void SetScoreboardIdentityPacket::~SetScoreboardIdentityPacket();
    virtual void SetScoreboardIdentityPacket::~SetScoreboardIdentityPacket();
    virtual void getId(void)const;
    virtual void _ZNK27SetScoreboardIdentityPacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
