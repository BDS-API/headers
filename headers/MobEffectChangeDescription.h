#pragma once

class MobEffectChangeDescription : AttributeDescription {

public:
    virtual void getJsonName(void)const;
    virtual ~MobEffectChangeDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    void MobEffectChangeDescription(void);
};
