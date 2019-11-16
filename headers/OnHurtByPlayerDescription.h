#pragma once

class OnHurtByPlayerDescription : TriggerDescription {

    virtual void getJsonName(void)const;
    virtual ~OnHurtByPlayerDescription();
    virtual ~OnHurtByPlayerDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
