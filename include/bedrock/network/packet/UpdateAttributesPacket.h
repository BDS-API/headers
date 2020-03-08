#pragma once

#include "../../actor/Actor"
#include "../../io/ReadOnlyBinaryStream"
#include "../../actor/attribute/AttributeInstanceHandle"
#include "../../io/BinaryStream"


class UpdateAttributesPacket : Packet {

public:
    UpdateAttributesPacket::~UpdateAttributesPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    UpdateAttributesPacket(void);
    UpdateAttributesPacket(Actor const&, std::vector<AttributeInstanceHandle, std::allocator<AttributeInstanceHandle>> const&);
    void getRuntimeId()const;
    void getAttributeData()const;
};
