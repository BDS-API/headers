#pragma once

#include <string>
#include "../../actor/unmapped/ActorUniqueID.h"
#include "Packet.h"


class MapInfoRequestPacket : Packet {

public:
    virtual void getId()const;
    ~MapInfoRequestPacket();
    virtual void read(ReadOnlyBinaryStream &);
    virtual void write(BinaryStream &)const;
    virtual std::string getName()const;
    MapInfoRequestPacket(ActorUniqueID);
    void getMapId()const;
    MapInfoRequestPacket();
};
