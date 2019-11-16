#pragma once

class CommandBlockUpdatePacket : Packet {

    virtual ~CommandBlockUpdatePacket();
    virtual ~CommandBlockUpdatePacket();
    virtual void getId(void)const;
    virtual void _ZNK24CommandBlockUpdatePacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
