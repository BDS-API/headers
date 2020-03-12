#pragma once

#include "../../../json/Value.h"
#include "AttributeDescription.h"


class MobEffectChangeDescription : AttributeDescription {

public:
    virtual void deserializeData(Json::Value &);
    ~MobEffectChangeDescription();
    virtual void getJsonName()const;
    virtual void serializeData(Json::Value &)const;
    MobEffectChangeDescription();
};
