#pragma once

class OnStartTakeoffDescription : TriggerDescription {

    virtual void getJsonName(void)const;
    virtual void ~OnStartTakeoffDescription();
    virtual void ~OnStartTakeoffDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
