#pragma once

class UpdateAttributesPacket::AttributeData {

public:

    void AttributeData(AttributeInstance const&);
    void AttributeData(void);
    void write(BinaryStream &)const;
    void read(ReadOnlyBinaryStream &);
    void AttributeData(UpdateAttributesPacket::AttributeData&&);
    void AttributeData(UpdateAttributesPacket::AttributeData const&);
};
