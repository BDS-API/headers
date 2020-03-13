#pragma once

#include "MoveControlDescription.h"


class GlideMoveControlDescription : MoveControlDescription {

public:
    virtual void getJsonName()const; // _ZNK27GlideMoveControlDescription11getJsonNameEv
    ~GlideMoveControlDescription(); // _ZN27GlideMoveControlDescriptionD2Ev
    virtual void deserializeData(Json::Value &); // _ZN27GlideMoveControlDescription15deserializeDataERN4Json5ValueE
    virtual void serializeData(Json::Value &)const; // _ZNK27GlideMoveControlDescription13serializeDataERN4Json5ValueE
    GlideMoveControlDescription(); // _ZN27GlideMoveControlDescriptionC2Ev
};
