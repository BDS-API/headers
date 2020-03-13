#pragma once

#include "PropertyDescription.h"


class IsIgnitedDescription : PropertyDescription {

public:
    virtual void getJsonName()const; // _ZNK20IsIgnitedDescription11getJsonNameEv
    ~IsIgnitedDescription(); // _ZN20IsIgnitedDescriptionD2Ev
    virtual void deserializeData(Json::Value &); // _ZN20IsIgnitedDescription15deserializeDataERN4Json5ValueE
    virtual void serializeData(Json::Value &)const; // _ZNK20IsIgnitedDescription13serializeDataERN4Json5ValueE
    IsIgnitedDescription(); // _ZN20IsIgnitedDescriptionC2Ev
};
