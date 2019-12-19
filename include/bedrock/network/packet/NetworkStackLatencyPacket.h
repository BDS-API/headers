#pragma once

class NetworkStackLatencyPacket : Packet {

public:
    static long DEFAULT_SEND_INTERVAL;

    virtual NetworkStackLatencyPacket::~NetworkStackLatencyPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    NetworkStackLatencyPacket(void);
};
