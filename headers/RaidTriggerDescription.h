#pragma once

class RaidTriggerDescription : ComponentDescription {

    virtual void getJsonName(void)const;
    virtual ~RaidTriggerDescription();
    virtual ~RaidTriggerDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
