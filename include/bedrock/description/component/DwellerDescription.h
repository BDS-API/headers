#pragma once

#include "ComponentDescription.h"


class DwellerDescription : ComponentDescription {

public:
    virtual void getJsonName()const; // _ZNK18DwellerDescription11getJsonNameEv
    ~DwellerDescription(); // _ZN18DwellerDescriptionD2Ev
    virtual void deserializeData(Json::Value &); // _ZN18DwellerDescription15deserializeDataERN4Json5ValueE
    virtual void serializeData(Json::Value &)const; // _ZNK18DwellerDescription13serializeDataERN4Json5ValueE
    DwellerDescription(); // _ZN18DwellerDescriptionC2Ev
};
