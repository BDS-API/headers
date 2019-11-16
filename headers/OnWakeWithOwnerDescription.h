#pragma once

class OnWakeWithOwnerDescription : TriggerDescription {

    virtual void getJsonName(void)const;
    virtual void ~OnWakeWithOwnerDescription();
    virtual void ~OnWakeWithOwnerDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
