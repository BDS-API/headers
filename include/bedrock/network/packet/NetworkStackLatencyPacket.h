#pragma once

#include <string>
#include "Packet.h"


class NetworkStackLatencyPacket : Packet {

public:
    static long DEFAULT_SEND_INTERVAL;

    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    ~NetworkStackLatencyPacket();
    virtual std::string getName()const;
    virtual void getId()const;
    NetworkStackLatencyPacket();
};
