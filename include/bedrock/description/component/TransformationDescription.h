#pragma once

#include "ComponentDescription.h"


class TransformationDescription : ComponentDescription {

public:
    virtual void getJsonName()const; // _ZNK25TransformationDescription11getJsonNameEv
    ~TransformationDescription(); // _ZN25TransformationDescriptionD2Ev
    virtual void deserializeData(Json::Value &); // _ZN25TransformationDescription15deserializeDataERN4Json5ValueE
    virtual void serializeData(Json::Value &)const; // _ZNK25TransformationDescription13serializeDataERN4Json5ValueE
    TransformationDescription(); // _ZN25TransformationDescriptionC2Ev
};
