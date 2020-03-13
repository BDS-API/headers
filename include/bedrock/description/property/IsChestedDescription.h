#pragma once

#include "PropertyDescription.h"


class IsChestedDescription : PropertyDescription {

public:
    virtual void getJsonName()const; // _ZNK20IsChestedDescription11getJsonNameEv
    ~IsChestedDescription(); // _ZN20IsChestedDescriptionD2Ev
    virtual void deserializeData(Json::Value &); // _ZN20IsChestedDescription15deserializeDataERN4Json5ValueE
    virtual void serializeData(Json::Value &)const; // _ZNK20IsChestedDescription13serializeDataERN4Json5ValueE
    IsChestedDescription(); // _ZN20IsChestedDescriptionC2Ev
};
