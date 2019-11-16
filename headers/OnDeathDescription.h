#pragma once

class OnDeathDescription : TriggerDescription {

    virtual void getJsonName(void)const;
    virtual void ~OnDeathDescription();
    virtual void ~OnDeathDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
