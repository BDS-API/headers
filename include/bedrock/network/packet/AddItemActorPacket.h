#pragma once

class AddItemActorPacket : Packet {

public:
    virtual AddItemActorPacket::~AddItemActorPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    AddItemActorPacket(void);
    AddItemActorPacket(ItemActor &);
};