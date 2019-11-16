#pragma once

class NavigationDescription : ComponentDescription {

    virtual void getJsonName(void)const;
    virtual ~NavigationDescription();
    virtual ~NavigationDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
