#pragma once

#include "../../io/ReadOnlyBinaryStream"
#include "../../../unmapped/AttributeData"
#include "../../io/BinaryStream"


using namespace UpdateAttributesPacket;

class AttributeData {

public:

    AttributeData(AttributeInstance const&);
    AttributeData(void);
    void write(BinaryStream &)const;
    void read(ReadOnlyBinaryStream &);
    AttributeData(UpdateAttributesPacket::AttributeData&&);
    AttributeData(UpdateAttributesPacket::AttributeData const&);
};
