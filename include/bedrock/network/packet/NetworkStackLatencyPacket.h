#pragma once

#include <string>
#include "Packet.h"


class NetworkStackLatencyPacket : Packet {

public:
    static long DEFAULT_SEND_INTERVAL;

    ~NetworkStackLatencyPacket(); // _ZN25NetworkStackLatencyPacketD2Ev
    virtual void getId()const; // _ZNK25NetworkStackLatencyPacket5getIdEv
    virtual std::string getName()const; // _ZNK25NetworkStackLatencyPacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK25NetworkStackLatencyPacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN25NetworkStackLatencyPacket4readER20ReadOnlyBinaryStream
    NetworkStackLatencyPacket(); // _ZN25NetworkStackLatencyPacketC2Ev
};
