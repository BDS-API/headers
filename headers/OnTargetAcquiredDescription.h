#pragma once

class OnTargetAcquiredDescription : TriggerDescription {

    virtual void getJsonName(void)const;
    virtual void ~OnTargetAcquiredDescription();
    virtual void ~OnTargetAcquiredDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
