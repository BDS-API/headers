#pragma once

class NavigationClimbDescription : NavigationDescription {

    virtual void getJsonName(void)const;
    virtual ~NavigationClimbDescription();
    virtual ~NavigationClimbDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
