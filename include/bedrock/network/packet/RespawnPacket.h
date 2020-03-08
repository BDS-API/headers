#pragma once

#include "../../io/BinaryStream"
#include "../../actor/unmapped/ActorRuntimeID"
#include "../../util/Vec3"
#include "../../io/ReadOnlyBinaryStream"


class RespawnPacket : Packet {

public:
    virtual RespawnPacket::~RespawnPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    RespawnPacket(void);
    RespawnPacket(Vec3 const&, PlayerRespawnState const&);
    RespawnPacket(Vec3 const&, PlayerRespawnState const&, ActorRuntimeID);
};
