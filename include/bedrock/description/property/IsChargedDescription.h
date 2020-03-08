#pragma once

#include "../../../json/Value"


class IsChargedDescription : PropertyDescription {

public:
    virtual void getJsonName()const;
    virtual IsChargedDescription::~IsChargedDescription()
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    IsChargedDescription(void);
};
