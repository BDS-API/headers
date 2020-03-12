#pragma once

#include "../../../json/Value.h"
#include "NavigationDescription.h"


class NavigationSwimDescription : NavigationDescription {

public:
    ~NavigationSwimDescription();
    virtual void getJsonName()const;
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
    NavigationSwimDescription();
};
