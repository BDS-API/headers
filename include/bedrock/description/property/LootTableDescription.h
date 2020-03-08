#pragma once

#include "../../../json/Value"


class LootTableDescription : PropertyDescription {

public:
    virtual void getJsonName()const;
    virtual LootTableDescription::~LootTableDescription()
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    LootTableDescription(void);
};
