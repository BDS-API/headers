#pragma once

#include "../../../json/Value.h"
#include "PropertyDescription.h"


class IsIgnitedDescription : PropertyDescription {

public:
    virtual void getJsonName()const;
    virtual void serializeData(Json::Value &)const;
    virtual void deserializeData(Json::Value &);
    ~IsIgnitedDescription();
    IsIgnitedDescription();
};
