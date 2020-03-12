#pragma once

#include <string>
#include "Packet.h"
#include "../../actor/unmapped/ActorRuntimeID.h"


class RespawnPacket : Packet {

public:
    virtual void getId()const;
    virtual void read(ReadOnlyBinaryStream &);
    ~RespawnPacket();
    virtual void write(BinaryStream &)const;
    virtual std::string getName()const;
//  RespawnPacket(Vec3 const&, PlayerRespawnState const&); //TODO: incomplete function definition
    RespawnPacket();
//  RespawnPacket(Vec3 const&, PlayerRespawnState const&, ActorRuntimeID); //TODO: incomplete function definition
};
