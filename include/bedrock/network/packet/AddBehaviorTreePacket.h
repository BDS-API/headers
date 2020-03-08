#pragma once

#include "../../io/BinaryStream"
#include "../../io/ReadOnlyBinaryStream"


class AddBehaviorTreePacket : Packet {

public:
    virtual AddBehaviorTreePacket::~AddBehaviorTreePacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    AddBehaviorTreePacket(void);
    AddBehaviorTreePacket(std::string const&);
};
