#pragma once

#include "ComponentDescription.h"


class TargetNearbyDescription : ComponentDescription {

public:
    virtual void getJsonName()const; // _ZNK23TargetNearbyDescription11getJsonNameEv
    ~TargetNearbyDescription(); // _ZN23TargetNearbyDescriptionD2Ev
    virtual void deserializeData(Json::Value &); // _ZN23TargetNearbyDescription15deserializeDataERN4Json5ValueE
    virtual void serializeData(Json::Value &)const; // _ZNK23TargetNearbyDescription13serializeDataERN4Json5ValueE
    TargetNearbyDescription(); // _ZN23TargetNearbyDescriptionC2Ev
};
