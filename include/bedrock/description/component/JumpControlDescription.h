#pragma once

#include "ComponentDescription.h"


class JumpControlDescription : ComponentDescription {

public:
    virtual void getJsonName()const; // _ZNK22JumpControlDescription11getJsonNameEv
    ~JumpControlDescription(); // _ZN22JumpControlDescriptionD2Ev
    virtual void deserializeData(Json::Value &); // _ZN22JumpControlDescription15deserializeDataERN4Json5ValueE
    virtual void serializeData(Json::Value &)const; // _ZNK22JumpControlDescription13serializeDataERN4Json5ValueE
    JumpControlDescription(); // _ZN22JumpControlDescriptionC2Ev
};
