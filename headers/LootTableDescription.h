#pragma once

class LootTableDescription : PropertyDescription {

    virtual void getJsonName(void)const;
    virtual ~LootTableDescription();
    virtual ~LootTableDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
