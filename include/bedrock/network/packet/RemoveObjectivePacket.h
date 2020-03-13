#pragma once

#include <string>
#include "Packet.h"


class RemoveObjectivePacket : Packet {

public:
    ~RemoveObjectivePacket(); // _ZN21RemoveObjectivePacketD2Ev
    virtual void getId()const; // _ZNK21RemoveObjectivePacket5getIdEv
    virtual std::string getName()const; // _ZNK21RemoveObjectivePacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK21RemoveObjectivePacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN21RemoveObjectivePacket4readER20ReadOnlyBinaryStream
    RemoveObjectivePacket(); // _ZN21RemoveObjectivePacketC2Ev
    RemoveObjectivePacket(Objective const&); // _ZN21RemoveObjectivePacketC2ERK9Objective
};
