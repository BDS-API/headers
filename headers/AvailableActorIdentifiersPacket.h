#pragma once

class AvailableActorIdentifiersPacket : Packet {

public:
    virtual ~AvailableActorIdentifiersPacket();
    virtual void getId(void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void AvailableActorIdentifiersPacket(void);
    void AvailableActorIdentifiersPacket(std::vector<ActorInfo, std::allocator<ActorInfo>> const&);
    void getIdentifiers(void)const;
};
