#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "../../util/BlockPos.h"
#include "./Packet.h"
#include "../../actor/unmapped/ActorUniqueID.h"
#include <string>


class ContainerOpenPacket : Packet {

public:
    virtual ~ContainerOpenPacket();
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

//  ContainerOpenPacket(ContainerID, ContainerType, BlockPos const&, ActorUniqueID const&); //TODO: incomplete function definition
    ContainerOpenPacket();
};
