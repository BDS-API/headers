#pragma once

#include "../../io/ReadOnlyBinaryStream.h"
#include <string>
#include "../../io/BinaryStream.h"
#include "./Packet.h"


class ContainerClosePacket : Packet {

public:
    virtual ~ContainerClosePacket();
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    ContainerClosePacket();
//  ContainerClosePacket(ContainerID); //TODO: incomplete function definition
};
