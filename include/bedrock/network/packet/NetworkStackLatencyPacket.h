#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "Packet.h"


class NetworkStackLatencyPacket : Packet {

public:
    static long DEFAULT_SEND_INTERVAL;

    ~NetworkStackLatencyPacket();
    virtual void read(ReadOnlyBinaryStream &);
    virtual std::string getName()const;
    virtual void getId()const;
    virtual void write(BinaryStream &)const;
    NetworkStackLatencyPacket();
};
