#pragma once

#include <string>
#include "Packet.h"


class UpdateBlockPropertiesPacket : Packet {

public:
    ~UpdateBlockPropertiesPacket(); // _ZN27UpdateBlockPropertiesPacketD2Ev
    virtual void getId()const; // _ZNK27UpdateBlockPropertiesPacket5getIdEv
    virtual std::string getName()const; // _ZNK27UpdateBlockPropertiesPacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK27UpdateBlockPropertiesPacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN27UpdateBlockPropertiesPacket4readER20ReadOnlyBinaryStream
    UpdateBlockPropertiesPacket(); // _ZN27UpdateBlockPropertiesPacketC2Ev
    UpdateBlockPropertiesPacket(BlockDefinitionGroup const&); // _ZN27UpdateBlockPropertiesPacketC2ERK20BlockDefinitionGroup
};
