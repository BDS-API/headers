#pragma once

#include "ComponentDescription.h"


class TrailDescription : ComponentDescription {

public:
    virtual void getJsonName()const; // _ZNK16TrailDescription11getJsonNameEv
    ~TrailDescription(); // _ZN16TrailDescriptionD2Ev
    virtual void deserializeData(Json::Value &); // _ZN16TrailDescription15deserializeDataERN4Json5ValueE
    virtual void serializeData(Json::Value &)const; // _ZNK16TrailDescription13serializeDataERN4Json5ValueE
    TrailDescription(); // _ZN16TrailDescriptionC2Ev
};
