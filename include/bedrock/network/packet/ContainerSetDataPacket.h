#pragma once

#include "../../io/BinaryStream"
#include "../../io/ReadOnlyBinaryStream"


class ContainerSetDataPacket : Packet {

public:
    virtual ContainerSetDataPacket::~ContainerSetDataPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    ContainerSetDataPacket(ContainerID, int, int);
    ContainerSetDataPacket(void);
};
