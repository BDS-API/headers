#pragma once

#include "PropertyDescription.h"


class CanFlyDescription : public PropertyDescription {

public:
    virtual void getJsonName()const; // _ZNK17CanFlyDescription11getJsonNameEv
    virtual ~CanFlyDescription(); // _ZN17CanFlyDescriptionD2Ev
    virtual void __fake_function0(); // fake
    virtual void deserializeData(Json::Value &); // _ZN17CanFlyDescription15deserializeDataERN4Json5ValueE
    virtual void serializeData(Json::Value &)const; // _ZNK17CanFlyDescription13serializeDataERN4Json5ValueE
    CanFlyDescription(); // _ZN17CanFlyDescriptionC2Ev
};
