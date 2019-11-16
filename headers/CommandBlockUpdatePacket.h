#pragma once

class CommandBlockUpdatePacket : Packet {

    virtual void CommandBlockUpdatePacket::~CommandBlockUpdatePacket();
    virtual void CommandBlockUpdatePacket::~CommandBlockUpdatePacket();
    virtual void getId(void)const;
    virtual void _ZNK24CommandBlockUpdatePacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
