#pragma once

#include "ComponentDescription.h"


class TameableDescription : ComponentDescription {

public:
    virtual void getJsonName()const; // _ZNK19TameableDescription11getJsonNameEv
    ~TameableDescription(); // _ZN19TameableDescriptionD2Ev
    virtual void deserializeData(Json::Value &); // _ZN19TameableDescription15deserializeDataERN4Json5ValueE
    virtual void serializeData(Json::Value &)const; // _ZNK19TameableDescription13serializeDataERN4Json5ValueE
    TameableDescription(); // _ZN19TameableDescriptionC2Ev
};
