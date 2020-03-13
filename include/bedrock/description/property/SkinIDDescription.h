#pragma once

#include "PropertyDescription.h"


class SkinIDDescription : PropertyDescription {

public:
    virtual void getJsonName()const; // _ZNK17SkinIDDescription11getJsonNameEv
    ~SkinIDDescription(); // _ZN17SkinIDDescriptionD2Ev
    virtual void deserializeData(Json::Value &); // _ZN17SkinIDDescription15deserializeDataERN4Json5ValueE
    virtual void serializeData(Json::Value &)const; // _ZNK17SkinIDDescription13serializeDataERN4Json5ValueE
    SkinIDDescription(); // _ZN17SkinIDDescriptionC2Ev
};
