#pragma once

#include "PropertyDescription.h"


class ColorDescription : public PropertyDescription {

public:
    virtual void getJsonName()const; // _ZNK16ColorDescription11getJsonNameEv
    virtual ~ColorDescription(); // _ZN16ColorDescriptionD2Ev
    virtual void __fake_function0(); // fake
    virtual void deserializeData(Json::Value &); // _ZN16ColorDescription15deserializeDataERN4Json5ValueE
    virtual void serializeData(Json::Value &)const; // _ZNK16ColorDescription13serializeDataERN4Json5ValueE
    ColorDescription(); // _ZN16ColorDescriptionC2Ev
};
