#pragma once

#include "PropertyDescription.h"


class FrictionModifierDescription : public PropertyDescription {

public:
    virtual void getJsonName()const; // _ZNK27FrictionModifierDescription11getJsonNameEv
    virtual ~FrictionModifierDescription(); // _ZN27FrictionModifierDescriptionD2Ev
    virtual void __fake_function0(); // fake
    virtual void deserializeData(Json::Value &); // _ZN27FrictionModifierDescription15deserializeDataERN4Json5ValueE
    virtual void serializeData(Json::Value &)const; // _ZNK27FrictionModifierDescription13serializeDataERN4Json5ValueE
    FrictionModifierDescription(); // _ZN27FrictionModifierDescriptionC2Ev
};
