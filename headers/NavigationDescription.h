#pragma once

class NavigationDescription : ComponentDescription {

    virtual void getJsonName(void)const;
    virtual void ~NavigationDescription();
    virtual void ~NavigationDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
