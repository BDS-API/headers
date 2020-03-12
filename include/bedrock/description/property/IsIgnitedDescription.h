#pragma once

#include "PropertyDescription.h"


class IsIgnitedDescription : PropertyDescription {

public:
    virtual void getJsonName()const;
    ~IsIgnitedDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
    IsIgnitedDescription();
};
