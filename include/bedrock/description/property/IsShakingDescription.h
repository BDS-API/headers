#pragma once

#include "PropertyDescription.h"


class IsShakingDescription : public PropertyDescription {

public:
    virtual void getJsonName()const; // _ZNK20IsShakingDescription11getJsonNameEv
    virtual ~IsShakingDescription(); // _ZN20IsShakingDescriptionD2Ev
    virtual void __fake_function0(); // fake
    virtual void deserializeData(Json::Value &); // _ZN20IsShakingDescription15deserializeDataERN4Json5ValueE
    virtual void serializeData(Json::Value &)const; // _ZNK20IsShakingDescription13serializeDataERN4Json5ValueE
    IsShakingDescription(); // _ZN20IsShakingDescriptionC2Ev
};
