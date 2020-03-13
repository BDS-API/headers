#pragma once

#include <string>
#include "Packet.h"


class ContainerClosePacket : Packet {

public:
    ~ContainerClosePacket(); // _ZN20ContainerClosePacketD2Ev
    virtual void getId()const; // _ZNK20ContainerClosePacket5getIdEv
    virtual std::string getName()const; // _ZNK20ContainerClosePacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK20ContainerClosePacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN20ContainerClosePacket4readER20ReadOnlyBinaryStream
    ContainerClosePacket(); // _ZN20ContainerClosePacketC2Ev
//  ContainerClosePacket(ContainerID); //TODO: incomplete function definition // _ZN20ContainerClosePacketC2E11ContainerID
};
