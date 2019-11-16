#pragma once

class PlayerHotbarPacket : Packet {

    virtual ~PlayerHotbarPacket();
    virtual ~PlayerHotbarPacket();
    virtual void getId(void)const;
    virtual void _ZNK18PlayerHotbarPacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
