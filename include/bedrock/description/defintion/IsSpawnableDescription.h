#pragma once

#include "DefintionDescription.h"


class IsSpawnableDescription : DefintionDescription {

public:
    ~IsSpawnableDescription(); // _ZN22IsSpawnableDescriptionD2Ev
    virtual void getJsonName()const; // _ZNK22IsSpawnableDescription11getJsonNameEv
    IsSpawnableDescription(); // _ZN22IsSpawnableDescriptionC2Ev
    IsSpawnableDescription(IsSpawnableDescription &&); // _ZN22IsSpawnableDescriptionC2EOS_
    void parse(Json::Value &); // _ZN22IsSpawnableDescription5parseERN4Json5ValueE
};
