#pragma once

#include "AttributeDescription.h"


class AttackDescription : public AttributeDescription {

public:
    virtual void getJsonName()const; // _ZNK17AttackDescription11getJsonNameEv
    virtual ~AttackDescription(); // _ZN17AttackDescriptionD2Ev
    virtual void __fake_function0(); // fake
    virtual void deserializeData(Json::Value &); // _ZN17AttackDescription15deserializeDataERN4Json5ValueE
    virtual void serializeData(Json::Value &)const; // _ZNK17AttackDescription13serializeDataERN4Json5ValueE
    AttackDescription(); // _ZN17AttackDescriptionC2Ev
};
