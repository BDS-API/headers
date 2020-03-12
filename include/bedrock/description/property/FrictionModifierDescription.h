#pragma once

#include "../../../json/Value.h"
#include "PropertyDescription.h"


class FrictionModifierDescription : PropertyDescription {

public:
    ~FrictionModifierDescription();
    virtual void serializeData(Json::Value &)const;
    virtual void deserializeData(Json::Value &);
    virtual void getJsonName()const;
    FrictionModifierDescription();
};
