#pragma once

class AvailableCommandsPacket : Packet {

    virtual void AvailableCommandsPacket::~AvailableCommandsPacket();
    virtual void AvailableCommandsPacket::~AvailableCommandsPacket();
    virtual void getId(void)const;
    virtual void _ZNK23AvailableCommandsPacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
