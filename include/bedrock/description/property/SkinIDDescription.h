#pragma once

#include "PropertyDescription.h"


class SkinIDDescription : public PropertyDescription {

public:
    virtual void getJsonName()const; // _ZNK17SkinIDDescription11getJsonNameEv
    virtual ~SkinIDDescription(); // _ZN17SkinIDDescriptionD2Ev
    virtual void __fake_function0(); // fake
    virtual void deserializeData(Json::Value &); // _ZN17SkinIDDescription15deserializeDataERN4Json5ValueE
    virtual void serializeData(Json::Value &)const; // _ZNK17SkinIDDescription13serializeDataERN4Json5ValueE
    SkinIDDescription(); // _ZN17SkinIDDescriptionC2Ev
};
