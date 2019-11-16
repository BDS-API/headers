#pragma once

class MobEffectChangeDescription : AttributeDescription {

    virtual void getJsonName(void)const;
    virtual void ~MobEffectChangeDescription();
    virtual void ~MobEffectChangeDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
