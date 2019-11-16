#pragma once

class OnHurtByPlayerDescription : TriggerDescription {

    virtual void getJsonName(void)const;
    virtual void ~OnHurtByPlayerDescription();
    virtual void ~OnHurtByPlayerDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
