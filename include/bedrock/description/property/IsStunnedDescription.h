#pragma once

#include "PropertyDescription.h"


class IsStunnedDescription : PropertyDescription {

public:
    virtual void getJsonName()const; // _ZNK20IsStunnedDescription11getJsonNameEv
    ~IsStunnedDescription(); // _ZN20IsStunnedDescriptionD2Ev
    virtual void deserializeData(Json::Value &); // _ZN20IsStunnedDescription15deserializeDataERN4Json5ValueE
    virtual void serializeData(Json::Value &)const; // _ZNK20IsStunnedDescription13serializeDataERN4Json5ValueE
    IsStunnedDescription(); // _ZN20IsStunnedDescriptionC2Ev
};
