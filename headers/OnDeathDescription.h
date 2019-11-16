#pragma once

class OnDeathDescription : TriggerDescription {

    virtual void getJsonName(void)const;
    virtual ~OnDeathDescription();
    virtual ~OnDeathDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
