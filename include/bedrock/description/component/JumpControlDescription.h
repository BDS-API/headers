#pragma once

#include "ComponentDescription.h"


class JumpControlDescription : public ComponentDescription {

public:
    virtual void getJsonName()const; // _ZNK22JumpControlDescription11getJsonNameEv
    virtual ~JumpControlDescription(); // _ZN22JumpControlDescriptionD2Ev
    virtual void __fake_function0(); // fake
    virtual void deserializeData(Json::Value &); // _ZN22JumpControlDescription15deserializeDataERN4Json5ValueE
    virtual void serializeData(Json::Value &)const; // _ZNK22JumpControlDescription13serializeDataERN4Json5ValueE
    JumpControlDescription(); // _ZN22JumpControlDescriptionC2Ev
};
