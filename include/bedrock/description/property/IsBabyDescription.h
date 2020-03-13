#pragma once

#include "PropertyDescription.h"


class IsBabyDescription : PropertyDescription {

public:
    virtual void getJsonName()const; // _ZNK17IsBabyDescription11getJsonNameEv
    ~IsBabyDescription(); // _ZN17IsBabyDescriptionD2Ev
    virtual void deserializeData(Json::Value &); // _ZN17IsBabyDescription15deserializeDataERN4Json5ValueE
    virtual void serializeData(Json::Value &)const; // _ZNK17IsBabyDescription13serializeDataERN4Json5ValueE
    IsBabyDescription(); // _ZN17IsBabyDescriptionC2Ev
};
