#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "../../actor/unmapped/ActorUniqueID.h"
#include "Packet.h"


class MapInfoRequestPacket : Packet {

public:
    virtual void getId()const;
    virtual std::string getName()const;
    ~MapInfoRequestPacket();
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    void getMapId()const;
    MapInfoRequestPacket(ActorUniqueID);
    MapInfoRequestPacket();
};
