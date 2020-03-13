#pragma once

#include "PropertyDescription.h"


class DefaultLookAngleDescription : PropertyDescription {

public:
    virtual void getJsonName()const; // _ZNK27DefaultLookAngleDescription11getJsonNameEv
    ~DefaultLookAngleDescription(); // _ZN27DefaultLookAngleDescriptionD2Ev
    virtual void deserializeData(Json::Value &); // _ZN27DefaultLookAngleDescription15deserializeDataERN4Json5ValueE
    virtual void serializeData(Json::Value &)const; // _ZNK27DefaultLookAngleDescription13serializeDataERN4Json5ValueE
    DefaultLookAngleDescription(); // _ZN27DefaultLookAngleDescriptionC2Ev
};
