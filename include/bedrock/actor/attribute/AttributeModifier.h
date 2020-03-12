#pragma once

#include <string>
#include "../../../mce/UUID.h"


class AttributeModifier {

public:
    static long mInvalidUUID;

    virtual bool isInstantaneous()const;
    ~AttributeModifier();
    void operator!=(AttributeModifier const&)const;
    AttributeModifier();
    void getAmount()const;
    AttributeModifier(mce::UUID, std::string const&, float, int, int, bool);
    void getOperation()const;
    void getOperand()const;
    void operator==(AttributeModifier const&)const;
    void getId()const;
    void setSerialize(bool);
    std::string getName()const;
    bool isSerializable()const;
    AttributeModifier(AttributeModifier const&);
};
