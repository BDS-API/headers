#pragma once

class ClientToServerHandshakePacket : Packet {

    virtual ~ClientToServerHandshakePacket();
    virtual ~ClientToServerHandshakePacket();
    virtual void getId(void)const;
    virtual void _ZNK29ClientToServerHandshakePacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
