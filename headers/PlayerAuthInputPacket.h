#pragma once

class PlayerAuthInputPacket : Packet {

    virtual void PlayerAuthInputPacket::~PlayerAuthInputPacket();
    virtual void PlayerAuthInputPacket::~PlayerAuthInputPacket();
    virtual void getId(void)const;
    virtual void _ZNK21PlayerAuthInputPacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
