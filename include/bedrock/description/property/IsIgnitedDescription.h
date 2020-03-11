#pragma once

#include "./PropertyDescription.h"
#include "../../../json/Value.h"


class IsIgnitedDescription : PropertyDescription {

public:
    virtual void getJsonName()const;
    virtual ~IsIgnitedDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    IsIgnitedDescription();
};
