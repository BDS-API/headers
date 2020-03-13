#pragma once

#include "PropertyDescription.h"


class GroundOffsetDescription : PropertyDescription {

public:
    virtual void getJsonName()const; // _ZNK23GroundOffsetDescription11getJsonNameEv
    ~GroundOffsetDescription(); // _ZN23GroundOffsetDescriptionD2Ev
    virtual void deserializeData(Json::Value &); // _ZN23GroundOffsetDescription15deserializeDataERN4Json5ValueE
    virtual void serializeData(Json::Value &)const; // _ZNK23GroundOffsetDescription13serializeDataERN4Json5ValueE
    GroundOffsetDescription(); // _ZN23GroundOffsetDescriptionC2Ev
};
