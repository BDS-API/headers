#pragma once

class PlayerActionPacket : Packet {

    virtual ~PlayerActionPacket();
    virtual ~PlayerActionPacket();
    virtual void getId(void)const;
    virtual void _ZNK18PlayerActionPacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
