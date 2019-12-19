#pragma once

class AttributeModifier {

public:
    static long mInvalidUUID;

    virtual AttributeModifier::~AttributeModifier();
    virtual bool isInstantaneous(void)const;

    AttributeModifier(AttributeModifier const&);
    AttributeModifier(mce::UUID, std::string const&, float, int, int, bool);
    AttributeModifier(void);
    void getId(void)const;
    void getOperation(void)const;
    void getOperand(void)const;
    void getAmount(void)const;
    bool isSerializable(void)const;
    void setSerialize(bool);
};
