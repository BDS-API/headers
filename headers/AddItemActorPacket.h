#pragma once

class AddItemActorPacket : Packet {

public:
    virtual ~AddItemActorPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void AddItemActorPacket(void);
    void AddItemActorPacket(ItemActor &);
};
