#pragma once

class NavigationSwimDescription : NavigationDescription {

    virtual void getJsonName(void)const;
    virtual ~NavigationSwimDescription();
    virtual ~NavigationSwimDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
