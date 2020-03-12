#pragma once

#include <string>
#include "Packet.h"


class ContainerSetDataPacket : Packet {

public:
    virtual void read(ReadOnlyBinaryStream &);
    virtual std::string getName()const;
    virtual void getId()const;
    ~ContainerSetDataPacket();
    virtual void write(BinaryStream &)const;
    ContainerSetDataPacket();
//  ContainerSetDataPacket(ContainerID, int, int); //TODO: incomplete function definition
};
