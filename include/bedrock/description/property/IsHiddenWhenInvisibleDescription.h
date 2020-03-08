#pragma once

#include "../../../json/Value"


class IsHiddenWhenInvisibleDescription : PropertyDescription {

public:
    virtual void getJsonName(void)const;
    virtual IsHiddenWhenInvisibleDescription::~IsHiddenWhenInvisibleDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    IsHiddenWhenInvisibleDescription(void);
};
