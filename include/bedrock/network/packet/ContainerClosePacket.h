#pragma once

class ContainerClosePacket : Packet {

public:
    virtual ContainerClosePacket::~ContainerClosePacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    ContainerClosePacket(void);
    ContainerClosePacket(ContainerID);
};
