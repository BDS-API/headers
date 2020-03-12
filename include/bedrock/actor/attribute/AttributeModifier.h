#pragma once

#include "../../../mce/UUID.h"
#include <string>


class AttributeModifier {

public:
    static long mInvalidUUID;

    ~AttributeModifier();
    virtual bool isInstantaneous()const;
    AttributeModifier();
    void getId()const;
    void getOperation()const;
    bool isSerializable()const;
    void setSerialize(bool);
    AttributeModifier(AttributeModifier const&);
    void getAmount()const;
    std::string getName()const;
    AttributeModifier(mce::UUID, std::string const&, float, int, int, bool);
    void getOperand()const;
    void operator!=(AttributeModifier const&)const;
    void operator==(AttributeModifier const&)const;
};
