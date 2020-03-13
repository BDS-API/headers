#pragma once

#include "ComponentDescription.h"


class PushableDescription : ComponentDescription {

public:
    virtual void getJsonName()const; // _ZNK19PushableDescription11getJsonNameEv
    ~PushableDescription(); // _ZN19PushableDescriptionD2Ev
    virtual void deserializeData(Json::Value &); // _ZN19PushableDescription15deserializeDataERN4Json5ValueE
    virtual void serializeData(Json::Value &)const; // _ZNK19PushableDescription13serializeDataERN4Json5ValueE
    PushableDescription(); // _ZN19PushableDescriptionC2Ev
};
