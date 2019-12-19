#pragma once

class LootTableDescription : PropertyDescription {

public:
    virtual void getJsonName(void)const;
    virtual LootTableDescription::~LootTableDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    LootTableDescription(void);
};
