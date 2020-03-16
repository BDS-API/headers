#pragma once

#include "PropertyDescription.h"


class IsIgnitedDescription : public PropertyDescription {

public:
    virtual void getJsonName()const; // _ZNK20IsIgnitedDescription11getJsonNameEv
    virtual ~IsIgnitedDescription(); // _ZN20IsIgnitedDescriptionD2Ev
    virtual void __fake_function0(); // fake
    virtual void deserializeData(Json::Value &); // _ZN20IsIgnitedDescription15deserializeDataERN4Json5ValueE
    virtual void serializeData(Json::Value &)const; // _ZNK20IsIgnitedDescription13serializeDataERN4Json5ValueE
    IsIgnitedDescription(); // _ZN20IsIgnitedDescriptionC2Ev
};
