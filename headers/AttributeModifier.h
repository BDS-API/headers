#pragma once

class AttributeModifier {

public:
    static long AttributeModifier::mInvalidUUID;

    virtual ~AttributeModifier();
    virtual bool isInstantaneous(void)const;

    void AttributeModifier(AttributeModifier const&);
    void AttributeModifier(mce::UUID, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, float, int, int, bool);
    void AttributeModifier(void);
    void getId(void)const;
    void getOperation(void)const;
    void getOperand(void)const;
    void getAmount(void)const;
    bool isSerializable(void)const;
    void setSerialize(bool);
};
