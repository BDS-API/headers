#pragma once

#include "PropertyDescription.h"


class CanClimbDescription : PropertyDescription {

public:
    virtual void getJsonName()const; // _ZNK19CanClimbDescription11getJsonNameEv
    ~CanClimbDescription(); // _ZN19CanClimbDescriptionD2Ev
    virtual void deserializeData(Json::Value &); // _ZN19CanClimbDescription15deserializeDataERN4Json5ValueE
    virtual void serializeData(Json::Value &)const; // _ZNK19CanClimbDescription13serializeDataERN4Json5ValueE
    CanClimbDescription(); // _ZN19CanClimbDescriptionC2Ev
};
