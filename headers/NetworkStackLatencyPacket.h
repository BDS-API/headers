#pragma once

class NetworkStackLatencyPacket : Packet {

    virtual ~NetworkStackLatencyPacket();
    virtual ~NetworkStackLatencyPacket();
    virtual void getId(void)const;
    virtual void _ZNK25NetworkStackLatencyPacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
