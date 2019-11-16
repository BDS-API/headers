#pragma once

class SetDefaultGameTypePacket : Packet {

    virtual ~SetDefaultGameTypePacket();
    virtual ~SetDefaultGameTypePacket();
    virtual void getId(void)const;
    virtual void _ZNK24SetDefaultGameTypePacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
