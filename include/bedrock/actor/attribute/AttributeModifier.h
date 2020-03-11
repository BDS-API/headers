#pragma once

#include "./AttributeModifier.h"
#include "../../../mce/UUID.h"
#include <string>


class AttributeModifier {

public:
    static long mInvalidUUID;

    virtual ~AttributeModifier();
    virtual bool isInstantaneous()const;

    AttributeModifier(AttributeModifier const&);
    AttributeModifier(mce::UUID, std::string const&, float, int, int, bool);
    AttributeModifier();
    void getId()const;
    std::string getName()const;
    void getOperation()const;
    void getOperand()const;
    void getAmount()const;
    bool isSerializable()const;
    void setSerialize(bool);
    void operator==(AttributeModifier const&)const;
    void operator!=(AttributeModifier const&)const;
};
