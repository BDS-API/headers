#pragma once

class NavigationFlyDescription : NavigationDescription {

    virtual void getJsonName(void)const;
    virtual void ~NavigationFlyDescription();
    virtual void ~NavigationFlyDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
