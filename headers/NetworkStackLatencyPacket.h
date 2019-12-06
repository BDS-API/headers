#pragma once

class NetworkStackLatencyPacket : Packet {

public:
    static long NetworkStackLatencyPacket::DEFAULT_SEND_INTERVAL;

    virtual ~NetworkStackLatencyPacket();
    virtual void getId(void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void NetworkStackLatencyPacket(void);
};
