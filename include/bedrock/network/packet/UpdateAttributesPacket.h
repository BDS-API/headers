#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "../../actor/Actor.h"
#include "../../actor/attribute/AttributeInstance.h"
#include <vector>
#include "Packet.h"
#include "../../actor/attribute/AttributeInstanceHandle.h"


class UpdateAttributesPacket : Packet {

public:
    class AttributeData;

    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void getId()const;
    virtual std::string getName()const;
    ~UpdateAttributesPacket();
    void getAttributeData()const;
    void getRuntimeId()const;
    UpdateAttributesPacket(Actor const&, std::vector<AttributeInstanceHandle> const&);
    UpdateAttributesPacket();
    class AttributeData {

    public:
        AttributeData(UpdateAttributesPacket::AttributeData const&);
        void write(BinaryStream &)const;
        AttributeData(AttributeInstance const&);
        AttributeData(UpdateAttributesPacket::AttributeData &&);
        ~AttributeData();
        void read(ReadOnlyBinaryStream &);
        AttributeData();
    };
};
