#pragma once

#include "ComponentDescription.h"


class SittableDescription : public ComponentDescription {

public:
    virtual void getJsonName()const; // _ZNK19SittableDescription11getJsonNameEv
    virtual ~SittableDescription(); // _ZN19SittableDescriptionD2Ev
    virtual void __fake_function0(); // fake
    virtual void deserializeData(Json::Value &); // _ZN19SittableDescription15deserializeDataERN4Json5ValueE
    virtual void serializeData(Json::Value &)const; // _ZNK19SittableDescription13serializeDataERN4Json5ValueE
    SittableDescription(); // _ZN19SittableDescriptionC2Ev
};
