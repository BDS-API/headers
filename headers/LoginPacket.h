#pragma once

class LoginPacket : Packet {

    virtual ~LoginPacket();
    virtual ~LoginPacket();
    virtual void getId(void)const;
    virtual void _ZNK11LoginPacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
