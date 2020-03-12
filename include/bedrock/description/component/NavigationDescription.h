#pragma once

#include "ComponentDescription.h"


class NavigationDescription : ComponentDescription {

public:
    virtual void serializeData(Json::Value &)const;
    ~NavigationDescription();
    virtual void deserializeData(Json::Value &);
    NavigationDescription();
};
