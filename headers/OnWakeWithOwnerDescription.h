#pragma once

class OnWakeWithOwnerDescription : TriggerDescription {

    virtual void getJsonName(void)const;
    virtual ~OnWakeWithOwnerDescription();
    virtual ~OnWakeWithOwnerDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
