#pragma once

#include "PropertyDescription.h"


class VariantDescription : public PropertyDescription {

public:
    virtual void getJsonName()const; // _ZNK18VariantDescription11getJsonNameEv
    virtual ~VariantDescription(); // _ZN18VariantDescriptionD2Ev
    virtual void __fake_function0(); // fake
    virtual void deserializeData(Json::Value &); // _ZN18VariantDescription15deserializeDataERN4Json5ValueE
    virtual void serializeData(Json::Value &)const; // _ZNK18VariantDescription13serializeDataERN4Json5ValueE
    VariantDescription(); // _ZN18VariantDescriptionC2Ev
};
