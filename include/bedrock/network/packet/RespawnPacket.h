#pragma once

#include "../../actor/unmapped/ActorRuntimeID.h"
#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "../../util/Vec3.h"
#include "./Packet.h"
#include <string>


class RespawnPacket : Packet {

public:
    virtual ~RespawnPacket();
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    RespawnPacket();
//  RespawnPacket(Vec3 const&, PlayerRespawnState const&); //TODO: incomplete function definition
//  RespawnPacket(Vec3 const&, PlayerRespawnState const&, ActorRuntimeID); //TODO: incomplete function definition
};
