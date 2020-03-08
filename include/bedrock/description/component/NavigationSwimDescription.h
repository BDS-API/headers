#pragma once

#include "../../../json/Value"


class NavigationSwimDescription : NavigationDescription {

public:
    virtual void getJsonName()const;
    virtual NavigationSwimDescription::~NavigationSwimDescription()
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    NavigationSwimDescription(void);
};
