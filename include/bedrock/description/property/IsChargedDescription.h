#pragma once

#include "PropertyDescription.h"


class IsChargedDescription : public PropertyDescription {

public:
    virtual void getJsonName()const; // _ZNK20IsChargedDescription11getJsonNameEv
    virtual ~IsChargedDescription(); // _ZN20IsChargedDescriptionD2Ev
    virtual void __fake_function0(); // fake
    virtual void deserializeData(Json::Value &); // _ZN20IsChargedDescription15deserializeDataERN4Json5ValueE
    virtual void serializeData(Json::Value &)const; // _ZNK20IsChargedDescription13serializeDataERN4Json5ValueE
    IsChargedDescription(); // _ZN20IsChargedDescriptionC2Ev
};
