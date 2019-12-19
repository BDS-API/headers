#pragma once

class PlayerHotbarPacket : Packet {

public:
    virtual PlayerHotbarPacket::~PlayerHotbarPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    PlayerHotbarPacket(void);
    PlayerHotbarPacket(unsigned int, ContainerID, bool);
};
