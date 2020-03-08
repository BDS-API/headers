#pragma once

#include "../../../json/Value"


class NavigationDescription : ComponentDescription {

public:
    virtual NavigationDescription::~NavigationDescription()
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    NavigationDescription(void);
};
