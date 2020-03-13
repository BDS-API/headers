#pragma once

#include "MoveControlDescription.h"


class SlimeMoveControlDescription : MoveControlDescription {

public:
    virtual void getJsonName()const; // _ZNK27SlimeMoveControlDescription11getJsonNameEv
    ~SlimeMoveControlDescription(); // _ZN27SlimeMoveControlDescriptionD2Ev
    virtual void deserializeData(Json::Value &); // _ZN27SlimeMoveControlDescription15deserializeDataERN4Json5ValueE
    virtual void serializeData(Json::Value &)const; // _ZNK27SlimeMoveControlDescription13serializeDataERN4Json5ValueE
    SlimeMoveControlDescription(); // _ZN27SlimeMoveControlDescriptionC2Ev
};
