#pragma once

#include "../../io/BinaryStream"
#include "../../util/BlockPos"
#include "../../io/ReadOnlyBinaryStream"
#include "../../actor/unmapped/ActorUniqueID"


class ContainerOpenPacket : Packet {

public:
    virtual ContainerOpenPacket::~ContainerOpenPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    ContainerOpenPacket(ContainerID, ContainerType, BlockPos const&, ActorUniqueID const&);
    ContainerOpenPacket(void);
};
