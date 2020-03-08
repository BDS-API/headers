#pragma once

#include "../../../json/Value"


class IsShakingDescription : PropertyDescription {

public:
    virtual void getJsonName()const;
    virtual IsShakingDescription::~IsShakingDescription()
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    IsShakingDescription(void);
};
