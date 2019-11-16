#pragma once

class OnHurtDescription : TriggerDescription {

    virtual void getJsonName(void)const;
    virtual void ~OnHurtDescription();
    virtual void ~OnHurtDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
