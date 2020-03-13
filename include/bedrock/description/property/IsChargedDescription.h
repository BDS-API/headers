#pragma once

#include "PropertyDescription.h"


class IsChargedDescription : PropertyDescription {

public:
    virtual void getJsonName()const; // _ZNK20IsChargedDescription11getJsonNameEv
    ~IsChargedDescription(); // _ZN20IsChargedDescriptionD2Ev
    virtual void deserializeData(Json::Value &); // _ZN20IsChargedDescription15deserializeDataERN4Json5ValueE
    virtual void serializeData(Json::Value &)const; // _ZNK20IsChargedDescription13serializeDataERN4Json5ValueE
    IsChargedDescription(); // _ZN20IsChargedDescriptionC2Ev
};
