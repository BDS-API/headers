#pragma once

class NavigationFloatDescription : NavigationDescription {

    virtual void getJsonName(void)const;
    virtual void ~NavigationFloatDescription();
    virtual void ~NavigationFloatDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
