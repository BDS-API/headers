#pragma once

#include "AttributeDescription.h"


class StrengthDescription : AttributeDescription {

public:
    virtual void getJsonName()const; // _ZNK19StrengthDescription11getJsonNameEv
    ~StrengthDescription(); // _ZN19StrengthDescriptionD2Ev
    virtual void deserializeData(Json::Value &); // _ZN19StrengthDescription15deserializeDataERN4Json5ValueE
    virtual void serializeData(Json::Value &)const; // _ZNK19StrengthDescription13serializeDataERN4Json5ValueE
    StrengthDescription(); // _ZN19StrengthDescriptionC2Ev
};
