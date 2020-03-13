#pragma once

#include "ComponentDescription.h"


class HideDescription : ComponentDescription {

public:
    virtual void getJsonName()const; // _ZNK15HideDescription11getJsonNameEv
    ~HideDescription(); // _ZN15HideDescriptionD2Ev
    virtual void deserializeData(Json::Value &); // _ZN15HideDescription15deserializeDataERN4Json5ValueE
    virtual void serializeData(Json::Value &)const; // _ZNK15HideDescription13serializeDataERN4Json5ValueE
    HideDescription(); // _ZN15HideDescriptionC2Ev
};
