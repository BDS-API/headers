#pragma once

#include "../../io/BinaryStream"
#include "../../actor/Actor"
#include "../../actor/attribute/AttributeInstanceHandle"
#include "../../io/ReadOnlyBinaryStream"


class UpdateAttributesPacket : Packet {

public:
    virtual UpdateAttributesPacket::~UpdateAttributesPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    UpdateAttributesPacket(void);
    UpdateAttributesPacket(Actor const&, std::vector<AttributeInstanceHandle, std::allocator<AttributeInstanceHandle>> const&);
    void getRuntimeId()const;
    void getAttributeData()const;
};
