#pragma once

#include "../../../json/Value"


class NavigationSwimDescription : NavigationDescription {

public:
    virtual void getJsonName()const;
    NavigationSwimDescription::~NavigationSwimDescription()
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    NavigationSwimDescription(void);
};
