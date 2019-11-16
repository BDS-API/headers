#pragma once

class NavigationWalkDescription : NavigationDescription {

    virtual void getJsonName(void)const;
    virtual void ~NavigationWalkDescription();
    virtual void ~NavigationWalkDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
