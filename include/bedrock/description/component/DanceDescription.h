#pragma once

#include "ComponentDescription.h"


class DanceDescription : public ComponentDescription {

public:
    virtual void getJsonName()const; // _ZNK16DanceDescription11getJsonNameEv
    virtual ~DanceDescription(); // _ZN16DanceDescriptionD2Ev
    virtual void __fake_function0(); // fake
    virtual void deserializeData(Json::Value &); // _ZN16DanceDescription15deserializeDataERN4Json5ValueE
    virtual void serializeData(Json::Value &)const; // _ZNK16DanceDescription13serializeDataERN4Json5ValueE
};
