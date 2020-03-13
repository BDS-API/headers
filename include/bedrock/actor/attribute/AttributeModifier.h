#pragma once

#include <string>
#include "../../../mce/UUID.h"


class AttributeModifier {

public:
    static long mInvalidUUID;

    ~AttributeModifier(); // _ZN17AttributeModifierD2Ev
    virtual bool isInstantaneous()const; // _ZNK17AttributeModifier15isInstantaneousEv
    AttributeModifier(AttributeModifier const&); // _ZN17AttributeModifierC2ERKS_
    AttributeModifier(mce::UUID, std::string const&, float, int, int, bool); // _ZN17AttributeModifierC2EN3mce4UUIDERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEfiib
    AttributeModifier(); // _ZN17AttributeModifierC2Ev
    void getId()const; // _ZNK17AttributeModifier5getIdEv
    std::string getName()const; // _ZNK17AttributeModifier7getNameB5cxx11Ev
    void getOperation()const; // _ZNK17AttributeModifier12getOperationEv
    void getOperand()const; // _ZNK17AttributeModifier10getOperandEv
    void getAmount()const; // _ZNK17AttributeModifier9getAmountEv
    bool isSerializable()const; // _ZNK17AttributeModifier14isSerializableEv
    void setSerialize(bool); // _ZN17AttributeModifier12setSerializeEb
    void operator==(AttributeModifier const&)const; // _ZNK17AttributeModifiereqERKS_
    void operator!=(AttributeModifier const&)const; // _ZNK17AttributeModifierneERKS_
};
