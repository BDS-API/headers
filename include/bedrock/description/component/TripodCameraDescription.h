#pragma once

#include "ComponentDescription.h"


class TripodCameraDescription : ComponentDescription {

public:
    virtual void getJsonName()const; // _ZNK23TripodCameraDescription11getJsonNameEv
    ~TripodCameraDescription(); // _ZN23TripodCameraDescriptionD2Ev
    virtual void deserializeData(Json::Value &); // _ZN23TripodCameraDescription15deserializeDataERN4Json5ValueE
    virtual void serializeData(Json::Value &)const; // _ZNK23TripodCameraDescription13serializeDataERN4Json5ValueE
    TripodCameraDescription(); // _ZN23TripodCameraDescriptionC2Ev
};
