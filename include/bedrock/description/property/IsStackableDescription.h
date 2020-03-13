#pragma once

#include "PropertyDescription.h"


class IsStackableDescription : PropertyDescription {

public:
    virtual void getJsonName()const; // _ZNK22IsStackableDescription11getJsonNameEv
    ~IsStackableDescription(); // _ZN22IsStackableDescriptionD2Ev
    virtual void deserializeData(Json::Value &); // _ZN22IsStackableDescription15deserializeDataERN4Json5ValueE
    virtual void serializeData(Json::Value &)const; // _ZNK22IsStackableDescription13serializeDataERN4Json5ValueE
    IsStackableDescription(); // _ZN22IsStackableDescriptionC2Ev
};
