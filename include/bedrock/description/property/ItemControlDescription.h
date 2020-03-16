#pragma once

#include "PropertyDescription.h"


class ItemControlDescription : public PropertyDescription {

public:
    virtual void getJsonName()const; // _ZNK22ItemControlDescription11getJsonNameEv
    virtual ~ItemControlDescription(); // _ZN22ItemControlDescriptionD2Ev
    virtual void __fake_function0(); // fake
    virtual void deserializeData(Json::Value &); // _ZN22ItemControlDescription15deserializeDataERN4Json5ValueE
    virtual void serializeData(Json::Value &)const; // _ZNK22ItemControlDescription13serializeDataERN4Json5ValueE
    ItemControlDescription(); // _ZN22ItemControlDescriptionC2Ev
};
