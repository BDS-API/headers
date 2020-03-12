#pragma once

#include <string>
#include "Packet.h"


class ContainerClosePacket : Packet {

public:
    virtual void write(BinaryStream &)const;
    virtual std::string getName()const;
    ~ContainerClosePacket();
    virtual void read(ReadOnlyBinaryStream &);
    virtual void getId()const;
    ContainerClosePacket();
//  ContainerClosePacket(ContainerID); //TODO: incomplete function definition
};
