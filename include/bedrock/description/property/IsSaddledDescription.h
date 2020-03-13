#pragma once

#include "PropertyDescription.h"


class IsSaddledDescription : PropertyDescription {

public:
    virtual void getJsonName()const; // _ZNK20IsSaddledDescription11getJsonNameEv
    ~IsSaddledDescription(); // _ZN20IsSaddledDescriptionD2Ev
    virtual void deserializeData(Json::Value &); // _ZN20IsSaddledDescription15deserializeDataERN4Json5ValueE
    virtual void serializeData(Json::Value &)const; // _ZNK20IsSaddledDescription13serializeDataERN4Json5ValueE
    IsSaddledDescription(); // _ZN20IsSaddledDescriptionC2Ev
};
