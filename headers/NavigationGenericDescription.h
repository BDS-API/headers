#pragma once

class NavigationGenericDescription : NavigationDescription {

    virtual void getJsonName(void)const;
    virtual void NavigationGenericDescription::~NavigationGenericDescription();
    virtual void NavigationGenericDescription::~NavigationGenericDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
