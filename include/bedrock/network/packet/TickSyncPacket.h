#pragma once

#include <string>
#include "Packet.h"


class TickSyncPacket : Packet {

public:
    ~TickSyncPacket(); // _ZN14TickSyncPacketD2Ev
    virtual void getId()const; // _ZNK14TickSyncPacket5getIdEv
    virtual std::string getName()const; // _ZNK14TickSyncPacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK14TickSyncPacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN14TickSyncPacket4readER20ReadOnlyBinaryStream
    TickSyncPacket(); // _ZN14TickSyncPacketC2Ev
    TickSyncPacket(long); // _ZN14TickSyncPacketC2El
};
