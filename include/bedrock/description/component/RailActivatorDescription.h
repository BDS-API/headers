#pragma once

#include "ComponentDescription.h"


class RailActivatorDescription : ComponentDescription {

public:
    virtual void getJsonName()const; // _ZNK24RailActivatorDescription11getJsonNameEv
    ~RailActivatorDescription(); // _ZN24RailActivatorDescriptionD2Ev
    virtual void deserializeData(Json::Value &); // _ZN24RailActivatorDescription15deserializeDataERN4Json5ValueE
    virtual void serializeData(Json::Value &)const; // _ZNK24RailActivatorDescription13serializeDataERN4Json5ValueE
    RailActivatorDescription(); // _ZN24RailActivatorDescriptionC2Ev
};
