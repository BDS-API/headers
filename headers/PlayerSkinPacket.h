#pragma once

class PlayerSkinPacket : Packet {

    virtual void PlayerSkinPacket::~PlayerSkinPacket();
    virtual void PlayerSkinPacket::~PlayerSkinPacket();
    virtual void getId(void)const;
    virtual void _ZNK16PlayerSkinPacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
