#pragma once

class ComponentDescription : Description {

    virtual void getJsonName(void)const;
    virtual void ComponentDescription::~ComponentDescription();
    virtual void ComponentDescription::~ComponentDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
