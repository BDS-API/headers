#pragma once

class OnStartLandingDescription : TriggerDescription {

    virtual void getJsonName(void)const;
    virtual ~OnStartLandingDescription();
    virtual ~OnStartLandingDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
