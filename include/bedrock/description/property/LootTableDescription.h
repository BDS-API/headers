#pragma once

#include "PropertyDescription.h"


class LootTableDescription : PropertyDescription {

public:
    virtual void deserializeData(Json::Value &);
    ~LootTableDescription();
    virtual void serializeData(Json::Value &)const;
    virtual void getJsonName()const;
    LootTableDescription();
};
