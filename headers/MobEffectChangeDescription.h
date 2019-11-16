#pragma once

class MobEffectChangeDescription : AttributeDescription {

    virtual void getJsonName(void)const;
    virtual void MobEffectChangeDescription::~MobEffectChangeDescription();
    virtual void MobEffectChangeDescription::~MobEffectChangeDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
