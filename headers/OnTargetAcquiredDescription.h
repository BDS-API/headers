#pragma once

class OnTargetAcquiredDescription : TriggerDescription {

    virtual void getJsonName(void)const;
    virtual ~OnTargetAcquiredDescription();
    virtual ~OnTargetAcquiredDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
