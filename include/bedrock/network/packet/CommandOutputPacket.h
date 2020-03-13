#pragma once

#include <string>
#include "Packet.h"


class CommandOutputPacket : Packet {

public:
    ~CommandOutputPacket(); // _ZN19CommandOutputPacketD2Ev
    virtual void getId()const; // _ZNK19CommandOutputPacket5getIdEv
    virtual std::string getName()const; // _ZNK19CommandOutputPacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK19CommandOutputPacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN19CommandOutputPacket4readER20ReadOnlyBinaryStream
    CommandOutputPacket(); // _ZN19CommandOutputPacketC2Ev
    CommandOutputPacket(CommandOrigin const&, CommandOutput const&); // _ZN19CommandOutputPacketC2ERK13CommandOriginRK13CommandOutput
    void getOriginData()const; // _ZNK19CommandOutputPacket13getOriginDataEv
    void getOutput()const; // _ZNK19CommandOutputPacket9getOutputEv
};
