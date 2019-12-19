#pragma once

class RaidTriggerDescription : ComponentDescription {

public:
    virtual void getJsonName(void)const;
    virtual RaidTriggerDescription::~RaidTriggerDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    RaidTriggerDescription(void);
};
