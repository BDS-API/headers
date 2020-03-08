#pragma once

#include "../../io/ReadOnlyBinaryStream"
#include "../../io/BinaryStream"


class ContainerSetDataPacket : Packet {

public:
    ContainerSetDataPacket::~ContainerSetDataPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    ContainerSetDataPacket(ContainerID, int, int);
    ContainerSetDataPacket(void);
};
