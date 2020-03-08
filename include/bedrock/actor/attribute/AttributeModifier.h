#pragma once

#include "../../../mce/UUID"


class AttributeModifier {

public:
    static long mInvalidUUID;

    virtual AttributeModifier::~AttributeModifier()
    virtual bool isInstantaneous()const;

    AttributeModifier(AttributeModifier const&);
    AttributeModifier(mce::UUID, std::string const&, float, int, int, bool);
    AttributeModifier(void);
    void getId()const;
    void getOperation()const;
    void getOperand()const;
    void getAmount()const;
    bool isSerializable()const;
    void setSerialize(bool);
};
