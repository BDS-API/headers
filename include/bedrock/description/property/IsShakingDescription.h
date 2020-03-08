#pragma once

#include "../../../json/Value"


class IsShakingDescription : PropertyDescription {

public:
    virtual void getJsonName(void)const;
    virtual IsShakingDescription::~IsShakingDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    IsShakingDescription(void);
};
