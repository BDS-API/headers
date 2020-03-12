#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "Packet.h"


class ContainerClosePacket : Packet {

public:
    virtual void read(ReadOnlyBinaryStream &);
    ~ContainerClosePacket();
    virtual void write(BinaryStream &)const;
    virtual std::string getName()const;
    virtual void getId()const;
//  ContainerClosePacket(ContainerID); //TODO: incomplete function definition
    ContainerClosePacket();
};
