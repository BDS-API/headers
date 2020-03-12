#pragma once

#include <string>
#include "Packet.h"
#include <vector>


class UpdateAttributesPacket : Packet {

public:
    class AttributeData;

    virtual void getId()const;
    ~UpdateAttributesPacket();
    virtual void write(BinaryStream &)const;
    virtual std::string getName()const;
    virtual void read(ReadOnlyBinaryStream &);
    void getRuntimeId()const;
    UpdateAttributesPacket();
    void getAttributeData()const;
    UpdateAttributesPacket(Actor const&, std::vector<AttributeInstanceHandle> const&);
    class AttributeData {

    public:
        AttributeData(UpdateAttributesPacket::AttributeData &&);
        AttributeData(UpdateAttributesPacket::AttributeData const&);
        ~AttributeData();
        void write(BinaryStream &)const;
        void read(ReadOnlyBinaryStream &);
        AttributeData();
        AttributeData(AttributeInstance const&);
    };
};
