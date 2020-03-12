#pragma once

#include "../../../json/Value.h"
#include "PropertyDescription.h"


class IsHiddenWhenInvisibleDescription : PropertyDescription {

public:
    virtual void getJsonName()const;
    ~IsHiddenWhenInvisibleDescription();
    virtual void serializeData(Json::Value &)const;
    virtual void deserializeData(Json::Value &);
    IsHiddenWhenInvisibleDescription();
};
