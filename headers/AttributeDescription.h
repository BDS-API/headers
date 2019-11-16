#pragma once

class AttributeDescription : Description {

    virtual void getJsonName(void)const;
    virtual void AttributeDescription::~AttributeDescription();
    virtual void AttributeDescription::~AttributeDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
