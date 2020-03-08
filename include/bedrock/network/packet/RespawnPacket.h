#pragma once

#include "../../io/ReadOnlyBinaryStream"
#include "../../actor/unmapped/ActorRuntimeID"
#include "../../util/Vec3"
#include "../../io/BinaryStream"


class RespawnPacket : Packet {

public:
    RespawnPacket::~RespawnPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    RespawnPacket(void);
    RespawnPacket(Vec3 const&, PlayerRespawnState const&);
    RespawnPacket(Vec3 const&, PlayerRespawnState const&, ActorRuntimeID);
};
