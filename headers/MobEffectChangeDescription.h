#pragma once

class MobEffectChangeDescription : AttributeDescription {

    virtual void getJsonName(void)const;
    virtual ~MobEffectChangeDescription();
    virtual ~MobEffectChangeDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
