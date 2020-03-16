#pragma once

#include "PropertyDescription.h"


class WASDControlledDescription : public PropertyDescription {

public:
    virtual void getJsonName()const; // _ZNK25WASDControlledDescription11getJsonNameEv
    virtual ~WASDControlledDescription(); // _ZN25WASDControlledDescriptionD2Ev
    virtual void __fake_function0(); // fake
    virtual void deserializeData(Json::Value &); // _ZN25WASDControlledDescription15deserializeDataERN4Json5ValueE
    virtual void serializeData(Json::Value &)const; // _ZNK25WASDControlledDescription13serializeDataERN4Json5ValueE
    WASDControlledDescription(); // _ZN25WASDControlledDescriptionC2Ev
};
