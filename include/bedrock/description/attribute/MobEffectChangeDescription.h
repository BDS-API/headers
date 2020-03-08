#pragma once

#include "../../../json/Value"


class MobEffectChangeDescription : AttributeDescription {

public:
    virtual void getJsonName()const;
    MobEffectChangeDescription::~MobEffectChangeDescription()
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    MobEffectChangeDescription(void);
};
