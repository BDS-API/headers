#pragma once

#include <string>
#include "Packet.h"


class ContainerOpenPacket : Packet {

public:
    ~ContainerOpenPacket(); // _ZN19ContainerOpenPacketD2Ev
    virtual void getId()const; // _ZNK19ContainerOpenPacket5getIdEv
    virtual std::string getName()const; // _ZNK19ContainerOpenPacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK19ContainerOpenPacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN19ContainerOpenPacket4readER20ReadOnlyBinaryStream
//  ContainerOpenPacket(ContainerID, ContainerType, BlockPos const&, ActorUniqueID const&); //TODO: incomplete function definition // _ZN19ContainerOpenPacketC2E11ContainerID13ContainerTypeRK8BlockPosRK13ActorUniqueID
    ContainerOpenPacket(); // _ZN19ContainerOpenPacketC2Ev
};
