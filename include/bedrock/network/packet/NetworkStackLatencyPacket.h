#pragma once

#include "../../io/BinaryStream"
#include "../../io/ReadOnlyBinaryStream"


class NetworkStackLatencyPacket : Packet {

public:
    static long DEFAULT_SEND_INTERVAL;

    virtual NetworkStackLatencyPacket::~NetworkStackLatencyPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    NetworkStackLatencyPacket(void);
};
