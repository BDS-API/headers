#pragma once

class CommandOutputPacket : Packet {

    virtual ~CommandOutputPacket();
    virtual ~CommandOutputPacket();
    virtual void getId(void)const;
    virtual void _ZNK19CommandOutputPacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
