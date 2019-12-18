#pragma once

class RespawnPacket : Packet {

public:
    virtual ~RespawnPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void RespawnPacket(void);
    void RespawnPacket(Vec3 const&, PlayerRespawnState const&);
    void RespawnPacket(Vec3 const&, PlayerRespawnState const&, ActorRuntimeID);
};
