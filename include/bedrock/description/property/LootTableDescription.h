#pragma once

#include "./PropertyDescription.h"
#include "../../../json/Value.h"


class LootTableDescription : PropertyDescription {

public:
    virtual void getJsonName()const;
    virtual ~LootTableDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    LootTableDescription();
};
