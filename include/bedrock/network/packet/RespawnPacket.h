#pragma once

#include "../../io/BinaryStream"
#include "../../io/ReadOnlyBinaryStream"
#include "../../../unmapped/Vec3"


class RespawnPacket : Packet {

public:
    virtual RespawnPacket::~RespawnPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    RespawnPacket(void);
    RespawnPacket(Vec3 const&, PlayerRespawnState const&);
    RespawnPacket(Vec3 const&, PlayerRespawnState const&, ActorRuntimeID);
};
