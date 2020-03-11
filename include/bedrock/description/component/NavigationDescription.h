#pragma once

#include "../../../json/Value.h"
#include "./ComponentDescription.h"


class NavigationDescription : ComponentDescription {

public:
    virtual ~NavigationDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    NavigationDescription();
};
