#pragma once

class NetworkChunkPublisherUpdatePacket : Packet {

    virtual ~NetworkChunkPublisherUpdatePacket();
    virtual ~NetworkChunkPublisherUpdatePacket();
    virtual void getId(void)const;
    virtual void _ZNK33NetworkChunkPublisherUpdatePacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
