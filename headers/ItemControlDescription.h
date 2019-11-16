#pragma once

class ItemControlDescription : PropertyDescription {

    virtual void getJsonName(void)const;
    virtual void ~ItemControlDescription();
    virtual void ~ItemControlDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
