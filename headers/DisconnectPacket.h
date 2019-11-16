#pragma once

class DisconnectPacket : Packet {

    virtual ~DisconnectPacket();
    virtual ~DisconnectPacket();
    virtual void getId(void)const;
    virtual void _ZNK16DisconnectPacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
