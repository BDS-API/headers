#pragma once

#include "PropertyDescription.h"


class MarkVariantDescription : public PropertyDescription {

public:
    virtual void getJsonName()const; // _ZNK22MarkVariantDescription11getJsonNameEv
    virtual ~MarkVariantDescription(); // _ZN22MarkVariantDescriptionD2Ev
    virtual void __fake_function0(); // fake
    virtual void deserializeData(Json::Value &); // _ZN22MarkVariantDescription15deserializeDataERN4Json5ValueE
    virtual void serializeData(Json::Value &)const; // _ZNK22MarkVariantDescription13serializeDataERN4Json5ValueE
    MarkVariantDescription(); // _ZN22MarkVariantDescriptionC2Ev
};
