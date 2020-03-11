#pragma once

#include "../../io/ReadOnlyBinaryStream.h"
#include <string>
#include "../../io/BinaryStream.h"
#include "./Packet.h"


class ContainerSetDataPacket : Packet {

public:
    virtual ~ContainerSetDataPacket();
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

//  ContainerSetDataPacket(ContainerID, int, int); //TODO: incomplete function definition
    ContainerSetDataPacket();
};
