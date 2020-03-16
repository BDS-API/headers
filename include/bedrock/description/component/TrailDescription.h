#pragma once

#include "ComponentDescription.h"


class TrailDescription : public ComponentDescription {

public:
    virtual void getJsonName()const; // _ZNK16TrailDescription11getJsonNameEv
    virtual ~TrailDescription(); // _ZN16TrailDescriptionD2Ev
    virtual void __fake_function0(); // fake
    virtual void deserializeData(Json::Value &); // _ZN16TrailDescription15deserializeDataERN4Json5ValueE
    virtual void serializeData(Json::Value &)const; // _ZNK16TrailDescription13serializeDataERN4Json5ValueE
    TrailDescription(); // _ZN16TrailDescriptionC2Ev
};
