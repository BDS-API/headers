#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "./Packet.h"
#include "../../actor/unmapped/ActorUniqueID.h"
#include <string>


class MapInfoRequestPacket : Packet {

public:
    virtual ~MapInfoRequestPacket();
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    MapInfoRequestPacket();
    MapInfoRequestPacket(ActorUniqueID);
    void getMapId()const;
};
