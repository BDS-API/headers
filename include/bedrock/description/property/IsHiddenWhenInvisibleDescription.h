#pragma once

#include "./PropertyDescription.h"
#include "../../../json/Value.h"


class IsHiddenWhenInvisibleDescription : PropertyDescription {

public:
    virtual void getJsonName()const;
    virtual ~IsHiddenWhenInvisibleDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    IsHiddenWhenInvisibleDescription();
};
