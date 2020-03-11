#pragma once

#include "./AttributeDescription.h"
#include "../../../json/Value.h"


class MobEffectChangeDescription : AttributeDescription {

public:
    virtual void getJsonName()const;
    virtual ~MobEffectChangeDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    MobEffectChangeDescription();
};
