#pragma once

#include "./NavigationDescription.h"
#include "../../../json/Value.h"


class NavigationSwimDescription : NavigationDescription {

public:
    virtual void getJsonName()const;
    virtual ~NavigationSwimDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    NavigationSwimDescription();
};
