#pragma once

#include "PropertyDescription.h"


class FamilyTypeDescription : PropertyDescription {

public:
    virtual void getJsonName()const; // _ZNK21FamilyTypeDescription11getJsonNameEv
    ~FamilyTypeDescription(); // _ZN21FamilyTypeDescriptionD2Ev
    virtual void deserializeData(Json::Value &); // _ZN21FamilyTypeDescription15deserializeDataERN4Json5ValueE
    virtual void serializeData(Json::Value &)const; // _ZNK21FamilyTypeDescription13serializeDataERN4Json5ValueE
    FamilyTypeDescription(); // _ZN21FamilyTypeDescriptionC2Ev
};
