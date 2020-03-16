#pragma once

#include "PropertyDescription.h"


class DefaultLookAngleDescription : public PropertyDescription {

public:
    virtual void getJsonName()const; // _ZNK27DefaultLookAngleDescription11getJsonNameEv
    virtual ~DefaultLookAngleDescription(); // _ZN27DefaultLookAngleDescriptionD2Ev
    virtual void __fake_function0(); // fake
    virtual void deserializeData(Json::Value &); // _ZN27DefaultLookAngleDescription15deserializeDataERN4Json5ValueE
    virtual void serializeData(Json::Value &)const; // _ZNK27DefaultLookAngleDescription13serializeDataERN4Json5ValueE
    DefaultLookAngleDescription(); // _ZN27DefaultLookAngleDescriptionC2Ev
};
