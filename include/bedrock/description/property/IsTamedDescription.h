#pragma once

#include "PropertyDescription.h"


class IsTamedDescription : public PropertyDescription {

public:
    virtual void getJsonName()const; // _ZNK18IsTamedDescription11getJsonNameEv
    virtual ~IsTamedDescription(); // _ZN18IsTamedDescriptionD2Ev
    virtual void __fake_function0(); // fake
    virtual void deserializeData(Json::Value &); // _ZN18IsTamedDescription15deserializeDataERN4Json5ValueE
    virtual void serializeData(Json::Value &)const; // _ZNK18IsTamedDescription13serializeDataERN4Json5ValueE
    IsTamedDescription(); // _ZN18IsTamedDescriptionC2Ev
};
