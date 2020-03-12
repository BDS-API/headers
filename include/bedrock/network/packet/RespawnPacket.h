#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "../../util/Vec3.h"
#include "../../actor/unmapped/ActorRuntimeID.h"
#include "Packet.h"


class RespawnPacket : Packet {

public:
    virtual std::string getName()const;
    ~RespawnPacket();
    virtual void read(ReadOnlyBinaryStream &);
    virtual void getId()const;
    virtual void write(BinaryStream &)const;
//  RespawnPacket(Vec3 const&, PlayerRespawnState const&, ActorRuntimeID); //TODO: incomplete function definition
    RespawnPacket();
//  RespawnPacket(Vec3 const&, PlayerRespawnState const&); //TODO: incomplete function definition
};
