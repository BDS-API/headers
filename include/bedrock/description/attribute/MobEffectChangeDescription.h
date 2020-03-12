#pragma once

#include "AttributeDescription.h"


class MobEffectChangeDescription : AttributeDescription {

public:
    virtual void deserializeData(Json::Value &);
    virtual void getJsonName()const;
    ~MobEffectChangeDescription();
    virtual void serializeData(Json::Value &)const;
    MobEffectChangeDescription();
};
