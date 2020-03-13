#pragma once

#include <string>
#include "Packet.h"


class ContainerSetDataPacket : Packet {

public:
    ~ContainerSetDataPacket(); // _ZN22ContainerSetDataPacketD2Ev
    virtual void getId()const; // _ZNK22ContainerSetDataPacket5getIdEv
    virtual std::string getName()const; // _ZNK22ContainerSetDataPacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK22ContainerSetDataPacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN22ContainerSetDataPacket4readER20ReadOnlyBinaryStream
//  ContainerSetDataPacket(ContainerID, int, int); //TODO: incomplete function definition // _ZN22ContainerSetDataPacketC2E11ContainerIDii
    ContainerSetDataPacket(); // _ZN22ContainerSetDataPacketC2Ev
};
