#pragma once

#include "./PropertyDescription.h"
#include "../../../json/Value.h"


class FrictionModifierDescription : PropertyDescription {

public:
    virtual void getJsonName()const;
    virtual ~FrictionModifierDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    FrictionModifierDescription();
};
