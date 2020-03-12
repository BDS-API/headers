#pragma once

#include <string>
#include "Packet.h"


class ContainerOpenPacket : Packet {

public:
    virtual void read(ReadOnlyBinaryStream &);
    virtual std::string getName()const;
    ~ContainerOpenPacket();
    virtual void getId()const;
    virtual void write(BinaryStream &)const;
//  ContainerOpenPacket(ContainerID, ContainerType, BlockPos const&, ActorUniqueID const&); //TODO: incomplete function definition
    ContainerOpenPacket();
};
