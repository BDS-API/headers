#pragma once

#include "../../io/ReadOnlyBinaryStream.h"
#include "../../io/BinaryStream.h"
#include "./AttributeData.h"
#include "./AttributeInstance.h"


namespace UpdateAttributesPacket {

class AttributeData {

public:

    ~AttributeData();
    AttributeData(AttributeInstance const&);
    AttributeData();
    void write(BinaryStream &)const;
    void read(ReadOnlyBinaryStream &);
    AttributeData(UpdateAttributesPacket::AttributeData &&);
    AttributeData(UpdateAttributesPacket::AttributeData const&);
};

}