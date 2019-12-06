#pragma once

class RaidTriggerDescription : ComponentDescription {

public:
    virtual void getJsonName(void)const;
    virtual ~RaidTriggerDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    void RaidTriggerDescription(void);
};
