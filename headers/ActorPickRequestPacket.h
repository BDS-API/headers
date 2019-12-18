#pragma once

class ActorPickRequestPacket : Packet {

public:
    virtual ~ActorPickRequestPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void ActorPickRequestPacket(void);
    void ActorPickRequestPacket(long const&, unsigned char const&);
};
