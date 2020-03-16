#pragma once

#include "PropertyDescription.h"


class LootTableDescription : public PropertyDescription {

public:
    virtual void getJsonName()const; // _ZNK20LootTableDescription11getJsonNameEv
    virtual ~LootTableDescription(); // _ZN20LootTableDescriptionD2Ev
    virtual void __fake_function0(); // fake
    virtual void deserializeData(Json::Value &); // _ZN20LootTableDescription15deserializeDataERN4Json5ValueE
    virtual void serializeData(Json::Value &)const; // _ZNK20LootTableDescription13serializeDataERN4Json5ValueE
    LootTableDescription(); // _ZN20LootTableDescriptionC2Ev
};
