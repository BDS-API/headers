#pragma once

#include "../../io/ReadOnlyBinaryStream"
#include "../../io/BinaryStream"
#include "../../../unmapped/AttributeData"


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
