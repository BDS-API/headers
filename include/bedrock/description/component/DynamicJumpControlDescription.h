#pragma once

#include "ComponentDescription.h"


class DynamicJumpControlDescription : ComponentDescription {

public:
    virtual void getJsonName()const; // _ZNK29DynamicJumpControlDescription11getJsonNameEv
    ~DynamicJumpControlDescription(); // _ZN29DynamicJumpControlDescriptionD2Ev
    virtual void deserializeData(Json::Value &); // _ZN29DynamicJumpControlDescription15deserializeDataERN4Json5ValueE
    virtual void serializeData(Json::Value &)const; // _ZNK29DynamicJumpControlDescription13serializeDataERN4Json5ValueE
    DynamicJumpControlDescription(); // _ZN29DynamicJumpControlDescriptionC2Ev
};
