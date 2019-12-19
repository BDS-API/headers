#pragma once

class AvailableActorIdentifiersPacket : Packet {

public:
    virtual AvailableActorIdentifiersPacket::~AvailableActorIdentifiersPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    AvailableActorIdentifiersPacket(void);
    AvailableActorIdentifiersPacket(std::vector<ActorInfo, std::allocator<ActorInfo>> const&);
    void getIdentifiers(void)const;
};
