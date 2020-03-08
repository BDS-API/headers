#pragma once

#include "../../io/ReadOnlyBinaryStream"
#include "../../../unmapped/BlockPos"
#include "../../io/BinaryStream"


class ContainerOpenPacket : Packet {

public:
    virtual ContainerOpenPacket::~ContainerOpenPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    ContainerOpenPacket(ContainerID, ContainerType, BlockPos const&, ActorUniqueID const&);
    ContainerOpenPacket(void);
};
