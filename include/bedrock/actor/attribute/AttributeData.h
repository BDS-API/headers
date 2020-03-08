#pragma once

#include "../../io/BinaryStream"
#include "../../io/ReadOnlyBinaryStream"
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
