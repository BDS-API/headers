#pragma once

class PropertyDescription : Description {

    virtual void getJsonName(void)const;
    virtual void PropertyDescription::~PropertyDescription();
    virtual void PropertyDescription::~PropertyDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
