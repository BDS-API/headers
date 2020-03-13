#pragma once

#include "PropertyDescription.h"


class FootSizeDescription : PropertyDescription {

public:
    virtual void getJsonName()const; // _ZNK19FootSizeDescription11getJsonNameEv
    ~FootSizeDescription(); // _ZN19FootSizeDescriptionD2Ev
    virtual void deserializeData(Json::Value &); // _ZN19FootSizeDescription15deserializeDataERN4Json5ValueE
    virtual void serializeData(Json::Value &)const; // _ZNK19FootSizeDescription13serializeDataERN4Json5ValueE
    FootSizeDescription(); // _ZN19FootSizeDescriptionC2Ev
};
