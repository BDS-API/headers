#pragma once

#include "ComponentDescription.h"


class AngryDescription : ComponentDescription {

public:
    virtual void getJsonName()const; // _ZNK16AngryDescription11getJsonNameEv
    ~AngryDescription(); // _ZN16AngryDescriptionD2Ev
    virtual void deserializeData(Json::Value &); // _ZN16AngryDescription15deserializeDataERN4Json5ValueE
    virtual void serializeData(Json::Value &)const; // _ZNK16AngryDescription13serializeDataERN4Json5ValueE
    AngryDescription(); // _ZN16AngryDescriptionC2Ev
};
