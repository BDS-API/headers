#pragma once

#include "ComponentDescription.h"


class DanceDescription : ComponentDescription {

public:
    virtual void getJsonName()const; // _ZNK16DanceDescription11getJsonNameEv
    ~DanceDescription(); // _ZN16DanceDescriptionD2Ev
    virtual void deserializeData(Json::Value &); // _ZN16DanceDescription15deserializeDataERN4Json5ValueE
    virtual void serializeData(Json::Value &)const; // _ZNK16DanceDescription13serializeDataERN4Json5ValueE
};
