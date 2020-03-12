#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "../../actor/unmapped/ActorUniqueID.h"
#include "../../util/BlockPos.h"
#include "Packet.h"


class ContainerOpenPacket : Packet {

public:
    virtual void write(BinaryStream &)const;
    virtual std::string getName()const;
    virtual void read(ReadOnlyBinaryStream &);
    ~ContainerOpenPacket();
    virtual void getId()const;
    ContainerOpenPacket();
//  ContainerOpenPacket(ContainerID, ContainerType, BlockPos const&, ActorUniqueID const&); //TODO: incomplete function definition
};
