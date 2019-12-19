#pragma once

class ContainerSetDataPacket : Packet {

public:
    virtual ContainerSetDataPacket::~ContainerSetDataPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    ContainerSetDataPacket(ContainerID, int, int);
    ContainerSetDataPacket(void);
};
