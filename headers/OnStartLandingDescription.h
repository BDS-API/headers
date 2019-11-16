#pragma once

class OnStartLandingDescription : TriggerDescription {

    virtual void getJsonName(void)const;
    virtual void ~OnStartLandingDescription();
    virtual void ~OnStartLandingDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
