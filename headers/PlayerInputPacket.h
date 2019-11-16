#pragma once

class PlayerInputPacket : Packet {

    virtual void PlayerInputPacket::~PlayerInputPacket();
    virtual void PlayerInputPacket::~PlayerInputPacket();
    virtual void getId(void)const;
    virtual void _ZNK17PlayerInputPacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
