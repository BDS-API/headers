#pragma once

#include "PropertyDescription.h"


class ScaleDescription : PropertyDescription {

public:
    virtual void getJsonName()const; // _ZNK16ScaleDescription11getJsonNameEv
    ~ScaleDescription(); // _ZN16ScaleDescriptionD2Ev
    virtual void deserializeData(Json::Value &); // _ZN16ScaleDescription15deserializeDataERN4Json5ValueE
    virtual void serializeData(Json::Value &)const; // _ZNK16ScaleDescription13serializeDataERN4Json5ValueE
    ScaleDescription(); // _ZN16ScaleDescriptionC2Ev
};
