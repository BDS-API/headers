#pragma once

#include "../../../json/Value.h"
#include "PropertyDescription.h"


class LootTableDescription : PropertyDescription {

public:
    ~LootTableDescription();
    virtual void getJsonName()const;
    virtual void serializeData(Json::Value &)const;
    virtual void deserializeData(Json::Value &);
    LootTableDescription();
};
