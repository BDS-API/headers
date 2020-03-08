#pragma once

#include "../../../json/Value"


class RaidTriggerDescription : ComponentDescription {

public:
    virtual void getJsonName()const;
    virtual RaidTriggerDescription::~RaidTriggerDescription()
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    RaidTriggerDescription(void);
};
