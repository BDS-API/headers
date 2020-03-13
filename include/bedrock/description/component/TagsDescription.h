#pragma once

#include "ComponentDescription.h"


class TagsDescription : ComponentDescription {

public:
    virtual void getJsonName()const; // _ZNK15TagsDescription11getJsonNameEv
    ~TagsDescription(); // _ZN15TagsDescriptionD2Ev
    virtual void deserializeData(Json::Value &); // _ZN15TagsDescription15deserializeDataERN4Json5ValueE
    virtual void serializeData(Json::Value &)const; // _ZNK15TagsDescription13serializeDataERN4Json5ValueE
    TagsDescription(); // _ZN15TagsDescriptionC2Ev
};
