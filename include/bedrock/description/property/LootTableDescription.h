#pragma once

#include "../../../json/Value"


class LootTableDescription : PropertyDescription {

public:
    virtual void getJsonName()const;
    LootTableDescription::~LootTableDescription()
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    LootTableDescription(void);
};
