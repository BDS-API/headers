#pragma once

#include "PropertyDescription.h"


class PushThroughDescription : public PropertyDescription {

public:
    virtual void getJsonName()const; // _ZNK22PushThroughDescription11getJsonNameEv
    virtual ~PushThroughDescription(); // _ZN22PushThroughDescriptionD2Ev
    virtual void __fake_function0(); // fake
    virtual void deserializeData(Json::Value &); // _ZN22PushThroughDescription15deserializeDataERN4Json5ValueE
    virtual void serializeData(Json::Value &)const; // _ZNK22PushThroughDescription13serializeDataERN4Json5ValueE
    PushThroughDescription(); // _ZN22PushThroughDescriptionC2Ev
};
