#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "Packet.h"


class ContainerSetDataPacket : Packet {

public:
    ~ContainerSetDataPacket();
    virtual void read(ReadOnlyBinaryStream &);
    virtual void getId()const;
    virtual void write(BinaryStream &)const;
    virtual std::string getName()const;
    ContainerSetDataPacket();
//  ContainerSetDataPacket(ContainerID, int, int); //TODO: incomplete function definition
};
