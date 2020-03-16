#pragma once

#include "PropertyDescription.h"


class IsStackableDescription : public PropertyDescription {

public:
    virtual void getJsonName()const; // _ZNK22IsStackableDescription11getJsonNameEv
    virtual ~IsStackableDescription(); // _ZN22IsStackableDescriptionD2Ev
    virtual void __fake_function0(); // fake
    virtual void deserializeData(Json::Value &); // _ZN22IsStackableDescription15deserializeDataERN4Json5ValueE
    virtual void serializeData(Json::Value &)const; // _ZNK22IsStackableDescription13serializeDataERN4Json5ValueE
    IsStackableDescription(); // _ZN22IsStackableDescriptionC2Ev
};
