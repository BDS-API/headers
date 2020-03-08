#pragma once

#include "../../../json/Value"


class IsIgnitedDescription : PropertyDescription {

public:
    virtual void getJsonName()const;
    virtual IsIgnitedDescription::~IsIgnitedDescription()
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    IsIgnitedDescription(void);
};
