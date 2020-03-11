#pragma once

#include "../../io/BinaryStream.h"
#include "../../actor/Actor.h"
#include "../../actor/attribute/AttributeInstanceHandle.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include <memory>
#include "./Packet.h"
#include <vector>
#include <string>


class UpdateAttributesPacket : Packet {

public:
    virtual ~UpdateAttributesPacket();
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    UpdateAttributesPacket();
    UpdateAttributesPacket(Actor const&, std::vector<AttributeInstanceHandle, std::allocator<AttributeInstanceHandle>> const&);
    void getRuntimeId()const;
    void getAttributeData()const;
};
