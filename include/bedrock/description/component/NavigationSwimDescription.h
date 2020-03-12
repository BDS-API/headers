#pragma once

#include "NavigationDescription.h"


class NavigationSwimDescription : NavigationDescription {

public:
    virtual void getJsonName()const;
    virtual void serializeData(Json::Value &)const;
    ~NavigationSwimDescription();
    virtual void deserializeData(Json::Value &);
    NavigationSwimDescription();
};
