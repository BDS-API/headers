#pragma once

class CompletedUsingItemPacket : Packet {

public:
    virtual CompletedUsingItemPacket::~CompletedUsingItemPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    CompletedUsingItemPacket(void);
    CompletedUsingItemPacket(short, int);
};
