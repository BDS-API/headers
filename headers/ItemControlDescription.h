#pragma once

class ItemControlDescription : PropertyDescription {

    virtual void getJsonName(void)const;
    virtual ~ItemControlDescription();
    virtual ~ItemControlDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
