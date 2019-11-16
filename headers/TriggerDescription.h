#pragma once

class TriggerDescription : Description {

    virtual void getJsonName(void)const;
    virtual void TriggerDescription::~TriggerDescription();
    virtual void TriggerDescription::~TriggerDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
