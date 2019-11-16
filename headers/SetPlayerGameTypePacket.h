#pragma once

class SetPlayerGameTypePacket : Packet {

    virtual void SetPlayerGameTypePacket::~SetPlayerGameTypePacket();
    virtual void SetPlayerGameTypePacket::~SetPlayerGameTypePacket();
    virtual void getId(void)const;
    virtual void _ZNK23SetPlayerGameTypePacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
