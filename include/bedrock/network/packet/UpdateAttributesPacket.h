#pragma once

#include <string>
#include "Packet.h"
#include <vector>


class UpdateAttributesPacket : Packet {

public:
    class AttributeData;

    ~UpdateAttributesPacket(); // _ZN22UpdateAttributesPacketD2Ev
    virtual void getId()const; // _ZNK22UpdateAttributesPacket5getIdEv
    virtual std::string getName()const; // _ZNK22UpdateAttributesPacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK22UpdateAttributesPacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN22UpdateAttributesPacket4readER20ReadOnlyBinaryStream
    UpdateAttributesPacket(); // _ZN22UpdateAttributesPacketC2Ev
    UpdateAttributesPacket(Actor const&, std::vector<AttributeInstanceHandle> const&); // _ZN22UpdateAttributesPacketC2ERK5ActorRKSt6vectorI23AttributeInstanceHandleSaIS4_EE
    void getRuntimeId()const; // _ZNK22UpdateAttributesPacket12getRuntimeIdEv
    void getAttributeData()const; // _ZNK22UpdateAttributesPacket16getAttributeDataEv
    class AttributeData {

    public:
        ~AttributeData(); // _ZN22UpdateAttributesPacket13AttributeDataD2Ev
        AttributeData(AttributeInstance const&); // _ZN22UpdateAttributesPacket13AttributeDataC2ERK17AttributeInstance
        AttributeData(); // _ZN22UpdateAttributesPacket13AttributeDataC2Ev
        void write(BinaryStream &)const; // _ZNK22UpdateAttributesPacket13AttributeData5writeER12BinaryStream
        void read(ReadOnlyBinaryStream &); // _ZN22UpdateAttributesPacket13AttributeData4readER20ReadOnlyBinaryStream
        AttributeData(UpdateAttributesPacket::AttributeData &&); // _ZN22UpdateAttributesPacket13AttributeDataC2EOS0_
        AttributeData(UpdateAttributesPacket::AttributeData const&); // _ZN22UpdateAttributesPacket13AttributeDataC2ERKS0_
    };
};
