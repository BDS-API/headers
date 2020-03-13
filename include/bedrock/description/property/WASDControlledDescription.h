#pragma once

#include "PropertyDescription.h"


class WASDControlledDescription : PropertyDescription {

public:
    virtual void getJsonName()const; // _ZNK25WASDControlledDescription11getJsonNameEv
    ~WASDControlledDescription(); // _ZN25WASDControlledDescriptionD2Ev
    virtual void deserializeData(Json::Value &); // _ZN25WASDControlledDescription15deserializeDataERN4Json5ValueE
    virtual void serializeData(Json::Value &)const; // _ZNK25WASDControlledDescription13serializeDataERN4Json5ValueE
    WASDControlledDescription(); // _ZN25WASDControlledDescriptionC2Ev
};
